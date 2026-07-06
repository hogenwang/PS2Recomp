#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F60D0
// Address: 0x1f60d0 - 0x1f63e8
void sub_001F60D0_0x1f60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F60D0_0x1f60d0");
#endif

    switch (ctx->pc) {
        case 0x1f6100u: goto label_1f6100;
        case 0x1f61fcu: goto label_1f61fc;
        case 0x1f620cu: goto label_1f620c;
        case 0x1f6310u: goto label_1f6310;
        case 0x1f6318u: goto label_1f6318;
        case 0x1f6348u: goto label_1f6348;
        case 0x1f6398u: goto label_1f6398;
        case 0x1f63b8u: goto label_1f63b8;
        default: break;
    }

    ctx->pc = 0x1f60d0u;

    // 0x1f60d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f60d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f60d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f60d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f60d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f60d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f60dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f60e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f60e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f60e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f60e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f60e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f60e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f60ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f60ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f60f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f60f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f60f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f60f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f60f8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1F60F8u;
    SET_GPR_U32(ctx, 31, 0x1F6100u);
    ctx->pc = 0x1F60FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60F8u;
    // 0x1f60fc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x1F60F8u, 0x1F6100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6100u;
label_1f6100:
    // 0x1f6100: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1f6100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1f6104: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x1f6104u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f6108: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x1f6108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1f610c: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x1f610cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1f6110: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1f6110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1f6114: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1f6114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f6118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f6118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f611c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1f611cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6120: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1f6120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f6124: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1f6124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f6128: 0x1229023  subu        $s2, $t1, $v0
    ctx->pc = 0x1f6128u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1f612c: 0x8e0a0028  lw          $t2, 0x28($s0)
    ctx->pc = 0x1f612cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1f6130: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x1f6130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1f6134: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x1f6134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1f6138: 0x3096007f  andi        $s6, $a0, 0x7F
    ctx->pc = 0x1f6138u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x1f613c: 0x8e140020  lw          $s4, 0x20($s0)
    ctx->pc = 0x1f613cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f6140: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F6140u;
    {
        const bool branch_taken_0x1f6140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6140u;
        // 0x1f6144: 0x35530100  ori         $s3, $t2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6140) {
            ctx->pc = 0x1F61F0u;
            goto label_1f61f0;
        }
    }
    ctx->pc = 0x1F6148u;
    // 0x1f6148: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1f6148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f614c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1f614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1f6150: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f6154: 0xf22023  subu        $a0, $a3, $s2
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x1f6158: 0x642c0  sll         $t0, $a2, 11
    ctx->pc = 0x1f6158u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x1f615c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6160: 0x62a024  and         $s4, $v1, $v0
    ctx->pc = 0x1f6160u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6164: 0x4a902  srl         $s5, $a0, 4
    ctx->pc = 0x1f6164u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1f6168: 0x11270004  beq         $t1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6168u;
    {
        const bool branch_taken_0x1f6168 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x1F616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6168u;
        // 0x1f616c: 0x2489021  addu        $s2, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6168) {
            ctx->pc = 0x1F617Cu;
            goto label_1f617c;
        }
    }
    ctx->pc = 0x1F6170u;
    // 0x1f6170: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x1f6170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1f6174: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6174u;
    {
        const bool branch_taken_0x1f6174 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6174u;
        // 0x1f6178: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6174) {
            ctx->pc = 0x1F6180u;
            goto label_1f6180;
        }
    }
    ctx->pc = 0x1F617Cu;
label_1f617c:
    // 0x1f617c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6180:
    // 0x1f6180: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f6180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f6184: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1f6184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1f6188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f618c: 0x42700  sll         $a0, $a0, 28
    ctx->pc = 0x1f618cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 28));
    // 0x1f6190: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1f6190u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1f6194: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1f6194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1f6198: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1f6198u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f619c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f61a0: 0x34530100  ori         $s3, $v0, 0x100
    ctx->pc = 0x1f61a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1f61a4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F61A4u;
    {
        const bool branch_taken_0x1f61a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f61a4) {
            ctx->pc = 0x1F61A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F61A4u;
            // 0x1f61a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F61ACu;
            goto label_1f61ac;
        }
    }
    ctx->pc = 0x1F61ACu;
label_1f61ac:
    // 0x1f61ac: 0x2810  mfhi        $a1
    ctx->pc = 0x1f61acu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f61b0: 0x4a20009  bltzl       $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F61B0u;
    {
        const bool branch_taken_0x1f61b0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1f61b0) {
            ctx->pc = 0x1F61B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F61B0u;
            // 0x1f61b4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F61D8u;
            goto label_1f61d8;
        }
    }
    ctx->pc = 0x1F61B8u;
    // 0x1f61b8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F61B8u;
    {
        const bool branch_taken_0x1f61b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f61b8) {
            ctx->pc = 0x1F61BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F61B8u;
            // 0x1f61bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F61C0u;
            goto label_1f61c0;
        }
    }
    ctx->pc = 0x1F61C0u;
label_1f61c0:
    // 0x1f61c0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f61c4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1f61c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f61c8: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F61C8u;
    {
        const bool branch_taken_0x1f61c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f61c8) {
            ctx->pc = 0x1F61CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F61C8u;
            // 0x1f61cc: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F62D8u;
            goto label_1f62d8;
        }
    }
    ctx->pc = 0x1F61D0u;
    // 0x1f61d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F61D0u;
    {
        const bool branch_taken_0x1f61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61D0u;
        // 0x1f61d4: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61d0) {
            ctx->pc = 0x1F61DCu;
            goto label_1f61dc;
        }
    }
    ctx->pc = 0x1F61D8u;
label_1f61d8:
    // 0x1f61d8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1f61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1f61dc:
    // 0x1f61dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f61e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1f61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1f61e4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1F61E4u;
    {
        const bool branch_taken_0x1f61e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61E4u;
        // 0x1f61e8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61e4) {
            ctx->pc = 0x1F62D4u;
            goto label_1f62d4;
        }
    }
    ctx->pc = 0x1F61ECu;
    // 0x1f61ec: 0x0  nop
    ctx->pc = 0x1f61ecu;
    // NOP
label_1f61f0:
    // 0x1f61f0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f61f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61f4: 0xc07d644  jal         func_1F5910
    ctx->pc = 0x1F61F4u;
    SET_GPR_U32(ctx, 31, 0x1F61FCu);
    ctx->pc = 0x1F61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61F4u;
    // 0x1f61f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5910u, 0x1F61F4u, 0x1F61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61FCu;
label_1f61fc:
    // 0x1f61fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f61fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6200: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6204: 0xc07d644  jal         func_1F5910
    ctx->pc = 0x1F6204u;
    SET_GPR_U32(ctx, 31, 0x1F620Cu);
    ctx->pc = 0x1F6208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6204u;
    // 0x1f6208: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5910u, 0x1F6204u, 0x1F620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F620Cu;
label_1f620c:
    // 0x1f620c: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1f620cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6210: 0x122e0030  beq         $s1, $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F6210u;
    {
        const bool branch_taken_0x1f6210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 14));
        ctx->pc = 0x1F6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6210u;
        // 0x1f6214: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6210) {
            ctx->pc = 0x1F62D4u;
            goto label_1f62d4;
        }
    }
    ctx->pc = 0x1F6218u;
    // 0x1f6218: 0x8e0c0008  lw          $t4, 0x8($s0)
    ctx->pc = 0x1f6218u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f621c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1f621cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6220: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1f6220u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6224: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1f6224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f6228: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x1f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
    // 0x1f622c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F622Cu;
    {
        const bool branch_taken_0x1f622c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f622c) {
            ctx->pc = 0x1F6230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F622Cu;
            // 0x1f6230: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6234u;
            goto label_1f6234;
        }
    }
    ctx->pc = 0x1F6234u;
label_1f6234:
    // 0x1f6234: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1f6234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f6238: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1f6238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1f623c: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x1f623cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f6240: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1f6240u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f6244: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x1f6244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x1f6248: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1f624c: 0x1cc2821  addu        $a1, $t6, $t4
    ctx->pc = 0x1f624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1f6250: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1f6250u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f6254: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1f6254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1f6258: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1f6258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1f625c: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x1f625cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f6260: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1f6260u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1f6264: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x1f6264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x1f6268: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1f6268u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f626c: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x1f626cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1f6270: 0x3010  mfhi        $a2
    ctx->pc = 0x1f6270u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1f6274: 0x4c001a  div         $zero, $v0, $t4
    ctx->pc = 0x1f6274u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f6278: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1f6278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1f627c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1f627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1f6280: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1f6280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f6284: 0x49a024  and         $s4, $v0, $t1
    ctx->pc = 0x1f6284u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1f6288: 0x3810  mfhi        $a3
    ctx->pc = 0x1f6288u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1f628c: 0xac001a  div         $zero, $a1, $t4
    ctx->pc = 0x1f628cu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f6290: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x1f6294: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1f6294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1f6298: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x1f6298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
    // 0x1f629c: 0x6580a  movz        $t3, $zero, $a2
    ctx->pc = 0x1f629cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x1f62a0: 0xb5f00  sll         $t3, $t3, 28
    ctx->pc = 0x1f62a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x1f62a4: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x1f62a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x1f62a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1f62a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f62ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F62ACu;
    {
        const bool branch_taken_0x1f62ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62ACu;
        // 0x1f62b0: 0x34930100  ori         $s3, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62ac) {
            ctx->pc = 0x1F62C8u;
            goto label_1f62c8;
        }
    }
    ctx->pc = 0x1F62B4u;
    // 0x1f62b4: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x1f62b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1f62b8: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F62B8u;
    {
        const bool branch_taken_0x1f62b8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f62b8) {
            ctx->pc = 0x1F62BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F62B8u;
            // 0x1f62bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F62C0u;
            goto label_1f62c0;
        }
    }
    ctx->pc = 0x1F62C0u;
label_1f62c0:
    // 0x1f62c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F62C0u;
    {
        const bool branch_taken_0x1f62c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f62c0) {
            ctx->pc = 0x1F62C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F62C0u;
            // 0x1f62c4: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F62D8u;
            goto label_1f62d8;
        }
    }
    ctx->pc = 0x1F62C8u;
label_1f62c8:
    // 0x1f62c8: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x1f62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1f62cc: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x1f62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x1f62d0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1f62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1f62d4:
    // 0x1f62d4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1f62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1f62d8:
    // 0x1f62d8: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F62D8u;
    {
        const bool branch_taken_0x1f62d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f62d8) {
            ctx->pc = 0x1F62DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F62D8u;
            // 0x1f62dc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6314u;
            goto label_1f6314;
        }
    }
    ctx->pc = 0x1F62E0u;
    // 0x1f62e0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1f62e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F62E4u;
    {
        const bool branch_taken_0x1f62e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62E4u;
        // 0x1f62e8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62e4) {
            ctx->pc = 0x1F6310u;
            goto label_1f6310;
        }
    }
    ctx->pc = 0x1F62ECu;
    // 0x1f62ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f62ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f62f0: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1f62f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1f62f4: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1f62f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1f62f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f62f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1f62fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1f6300: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f6300u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1f6304: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1f6304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1f6308: 0xc07d658  jal         func_1F5960
    ctx->pc = 0x1F6308u;
    SET_GPR_U32(ctx, 31, 0x1F6310u);
    ctx->pc = 0x1F630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6308u;
    // 0x1f630c: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5960u, 0x1F6308u, 0x1F6310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6310u;
label_1f6310:
    // 0x1f6310: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f6310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1f6314:
    // 0x1f6314: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1f6314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1f6318:
    // 0x1f6318: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6318u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1f631c: 0x0  nop
    ctx->pc = 0x1f631cu;
    // NOP
    // 0x1f6320: 0x0  nop
    ctx->pc = 0x1f6320u;
    // NOP
    // 0x1f6324: 0x0  nop
    ctx->pc = 0x1f6324u;
    // NOP
    // 0x1f6328: 0x0  nop
    ctx->pc = 0x1f6328u;
    // NOP
    // 0x1f632c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F632Cu;
    {
        const bool branch_taken_0x1f632c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F632Cu;
        // 0x1f6330: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f632c) {
            ctx->pc = 0x1F6318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6318;
        }
    }
    ctx->pc = 0x1F6334u;
    // 0x1f6334: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6338: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1f6338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1f633c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1f633cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1f6340: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1f6340u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22)); // MMIO: 0x10000000
    // 0x1f6344: 0x0  nop
    ctx->pc = 0x1f6344u;
    // NOP
label_1f6348:
    // 0x1f6348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6348u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1f634c: 0x0  nop
    ctx->pc = 0x1f634cu;
    // NOP
    // 0x1f6350: 0x0  nop
    ctx->pc = 0x1f6350u;
    // NOP
    // 0x1f6354: 0x0  nop
    ctx->pc = 0x1f6354u;
    // NOP
    // 0x1f6358: 0x0  nop
    ctx->pc = 0x1f6358u;
    // NOP
    // 0x1f635c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F635Cu;
    {
        const bool branch_taken_0x1f635c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F635Cu;
        // 0x1f6360: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f635c) {
            ctx->pc = 0x1F6348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6348;
        }
    }
    ctx->pc = 0x1F6364u;
    // 0x1f6364: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f6364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6368: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f6368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f636c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1f636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1f6370: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x1f6370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x1f6374: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1f6374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1f6378: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1f6378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1f637c: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1f637cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x1f6380: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x1f6380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
    // 0x1f6384: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f6384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f6388: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6388u;
    {
        const bool branch_taken_0x1f6388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6388) {
            ctx->pc = 0x1F638Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6388u;
            // 0x1f638c: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F639Cu;
            goto label_1f639c;
        }
    }
    ctx->pc = 0x1F6390u;
    // 0x1f6390: 0xc07d672  jal         func_1F59C8
    ctx->pc = 0x1F6390u;
    SET_GPR_U32(ctx, 31, 0x1F6398u);
    ctx->pc = 0x1F6394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6390u;
    // 0x1f6394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F59C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F59C8u, 0x1F6390u, 0x1F6398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6398u;
label_1f6398:
    // 0x1f6398: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f6398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1f639c:
    // 0x1f639c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f639cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f63a0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1f63a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1f63a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f63a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f63a8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x1f63ac: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x1f63acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x1f63b0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1F63B0u;
    SET_GPR_U32(ctx, 31, 0x1F63B8u);
    ctx->pc = 0x1F63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63B0u;
    // 0x1f63b4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x1F63B0u, 0x1F63B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63B8u;
label_1f63b8:
    // 0x1f63b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f63bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f63bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f63c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f63c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f63c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f63c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f63c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f63c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f63cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f63ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f63d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f63d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f63d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f63d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f63d8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f63d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f63dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F63DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63DCu;
        // 0x1f63e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F63DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F63E4u;
    // 0x1f63e4: 0x0  nop
    ctx->pc = 0x1f63e4u;
    // NOP
}
