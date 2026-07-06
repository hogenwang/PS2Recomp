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

// Function: sub_0013D150
// Address: 0x13d150 - 0x13d2d0
void sub_0013D150_0x13d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D150_0x13d150");
#endif

    switch (ctx->pc) {
        case 0x13d174u: goto label_13d174;
        case 0x13d184u: goto label_13d184;
        case 0x13d1a8u: goto label_13d1a8;
        case 0x13d23cu: goto label_13d23c;
        case 0x13d25cu: goto label_13d25c;
        case 0x13d27cu: goto label_13d27c;
        case 0x13d29cu: goto label_13d29c;
        default: break;
    }

    ctx->pc = 0x13d150u;

    // 0x13d150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13d154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13d154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13d158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13d15c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d160: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13d160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d168: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13d168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d16c: 0xc04f6dc  jal         func_13DB70
    ctx->pc = 0x13D16Cu;
    SET_GPR_U32(ctx, 31, 0x13D174u);
    ctx->pc = 0x13D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D16Cu;
    // 0x13d170: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DB70u, 0x13D16Cu, 0x13D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D174u;
label_13d174:
    // 0x13d174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13d174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13d178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d17c: 0xc04f874  jal         func_13E1D0
    ctx->pc = 0x13D17Cu;
    SET_GPR_U32(ctx, 31, 0x13D184u);
    ctx->pc = 0x13D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D17Cu;
    // 0x13d180: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1D0u, 0x13D17Cu, 0x13D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D184u;
label_13d184:
    // 0x13d184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d188: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x13d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x13d18c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x13d18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x13d190: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D190u;
    {
        const bool branch_taken_0x13d190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d190) {
            ctx->pc = 0x13D194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D190u;
            // 0x13d194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D1A0u;
            goto label_13d1a0;
        }
    }
    ctx->pc = 0x13D198u;
    // 0x13d198: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x13D198u;
    {
        const bool branch_taken_0x13d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D198u;
        // 0x13d19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d198) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D1A0u;
label_13d1a0:
    // 0x13d1a0: 0xc04f78c  jal         func_13DE30
    ctx->pc = 0x13D1A0u;
    SET_GPR_U32(ctx, 31, 0x13D1A8u);
    ctx->pc = 0x13D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D1A0u;
    // 0x13d1a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE30u, 0x13D1A0u, 0x13D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D1A8u;
label_13d1a8:
    // 0x13d1a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D1A8u;
    {
        const bool branch_taken_0x13d1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d1a8) {
            ctx->pc = 0x13D1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D1A8u;
            // 0x13d1ac: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D1B8u;
            goto label_13d1b8;
        }
    }
    ctx->pc = 0x13D1B0u;
    // 0x13d1b0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x13D1B0u;
    {
        const bool branch_taken_0x13d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1B0u;
        // 0x13d1b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1b0) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D1B8u;
label_13d1b8:
    // 0x13d1b8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D1B8u;
    {
        const bool branch_taken_0x13d1b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1b8) {
            ctx->pc = 0x13D1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D1B8u;
            // 0x13d1bc: 0x8e620490  lw          $v0, 0x490($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D1C8u;
            goto label_13d1c8;
        }
    }
    ctx->pc = 0x13D1C0u;
    // 0x13d1c0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x13D1C0u;
    {
        const bool branch_taken_0x13d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1C0u;
        // 0x13d1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1c0) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D1C8u;
label_13d1c8:
    // 0x13d1c8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13d1cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13D1CCu;
    {
        const bool branch_taken_0x13d1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1cc) {
            ctx->pc = 0x13D1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D1CCu;
            // 0x13d1d0: 0x86640240  lh          $a0, 0x240($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D1FCu;
            goto label_13d1fc;
        }
    }
    ctx->pc = 0x13D1D4u;
    // 0x13d1d4: 0x8662020c  lh          $v0, 0x20C($s3)
    ctx->pc = 0x13d1d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 524)));
    // 0x13d1d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D1D8u;
    {
        const bool branch_taken_0x13d1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d1d8) {
            ctx->pc = 0x13D1F8u;
            goto label_13d1f8;
        }
    }
    ctx->pc = 0x13D1E0u;
    // 0x13d1e0: 0x8e64023c  lw          $a0, 0x23C($s3)
    ctx->pc = 0x13d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x13d1e4: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x13d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x13d1e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d1ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d1f0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x13D1F0u;
    {
        const bool branch_taken_0x13d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1F0u;
        // 0x13d1f4: 0xae63023c  sw          $v1, 0x23C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1f0) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D1F8u;
label_13d1f8:
    // 0x13d1f8: 0x86640240  lh          $a0, 0x240($s3)
    ctx->pc = 0x13d1f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 576)));
label_13d1fc:
    // 0x13d1fc: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x13d1fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x13d200: 0x5020002b  beql        $at, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x13D200u;
    {
        const bool branch_taken_0x13d200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d200) {
            ctx->pc = 0x13D204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D200u;
            // 0x13d204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D208u;
    // 0x13d208: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13d208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13d20c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13d210: 0x2463cbc0  addiu       $v1, $v1, -0x3440
    ctx->pc = 0x13d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953920));
    // 0x13d214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d218: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d21c: 0x400008  jr          $v0
    ctx->pc = 0x13D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D224u: goto label_13d224;
            case 0x13D250u: goto label_13d250;
            case 0x13D26Cu: goto label_13d26c;
            case 0x13D28Cu: goto label_13d28c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D21Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13D224u;
label_13d224:
    // 0x13d224: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x13d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x13d228: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13d228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d22c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13d22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d230: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x13d234: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x13D234u;
    SET_GPR_U32(ctx, 31, 0x13D23Cu);
    ctx->pc = 0x13D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D234u;
    // 0x13d238: 0xae62023c  sw          $v0, 0x23C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x13D234u, 0x13D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D23Cu;
label_13d23c:
    // 0x13d23c: 0x8e630238  lw          $v1, 0x238($s3)
    ctx->pc = 0x13d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x13d240: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x13d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13d244: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13d248: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13D248u;
    {
        const bool branch_taken_0x13d248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D248u;
        // 0x13d24c: 0xae620238  sw          $v0, 0x238($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d248) {
            ctx->pc = 0x13D2ACu;
            goto label_13d2ac;
        }
    }
    ctx->pc = 0x13D250u;
label_13d250:
    // 0x13d250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13d250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d254: 0xc04f4b4  jal         func_13D2D0
    ctx->pc = 0x13D254u;
    SET_GPR_U32(ctx, 31, 0x13D25Cu);
    ctx->pc = 0x13D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D254u;
    // 0x13d258: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D2D0u, 0x13D254u, 0x13D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D25Cu;
label_13d25c:
    // 0x13d25c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13D25Cu;
    {
        const bool branch_taken_0x13d25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d25c) {
            ctx->pc = 0x13D2ACu;
            goto label_13d2ac;
        }
    }
    ctx->pc = 0x13D264u;
    // 0x13d264: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13D264u;
    {
        const bool branch_taken_0x13d264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D264u;
        // 0x13d268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d264) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D26Cu;
label_13d26c:
    // 0x13d26c: 0x2486fffe  addiu       $a2, $a0, -0x2
    ctx->pc = 0x13d26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x13d270: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13d270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d274: 0xc04f4d8  jal         func_13D360
    ctx->pc = 0x13D274u;
    SET_GPR_U32(ctx, 31, 0x13D27Cu);
    ctx->pc = 0x13D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D274u;
    // 0x13d278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D360u, 0x13D274u, 0x13D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D27Cu;
label_13d27c:
    // 0x13d27c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13D27Cu;
    {
        const bool branch_taken_0x13d27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d27c) {
            ctx->pc = 0x13D2ACu;
            goto label_13d2ac;
        }
    }
    ctx->pc = 0x13D284u;
    // 0x13d284: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13D284u;
    {
        const bool branch_taken_0x13d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D284u;
        // 0x13d288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d284) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D28Cu;
label_13d28c:
    // 0x13d28c: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x13d28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x13d290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13d290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d294: 0xc04f4d8  jal         func_13D360
    ctx->pc = 0x13D294u;
    SET_GPR_U32(ctx, 31, 0x13D29Cu);
    ctx->pc = 0x13D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D294u;
    // 0x13d298: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D360u, 0x13D294u, 0x13D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D29Cu;
label_13d29c:
    // 0x13d29c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D29Cu;
    {
        const bool branch_taken_0x13d29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d29c) {
            ctx->pc = 0x13D2ACu;
            goto label_13d2ac;
        }
    }
    ctx->pc = 0x13D2A4u;
    // 0x13d2a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13D2A4u;
    {
        const bool branch_taken_0x13d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2A4u;
        // 0x13d2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2a4) {
            ctx->pc = 0x13D2B0u;
            goto label_13d2b0;
        }
    }
    ctx->pc = 0x13D2ACu;
label_13d2ac:
    // 0x13d2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d2b0:
    // 0x13d2b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13d2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d2b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13d2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d2b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2C4u;
        // 0x13d2c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D2CCu;
    // 0x13d2cc: 0x0  nop
    ctx->pc = 0x13d2ccu;
    // NOP
    if (ctx->pc == 0x13d2ccu) { ctx->pc = 0x13d2d0u; }
}
