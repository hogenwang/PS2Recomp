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

// Function: sub_0032A110
// Address: 0x32a110 - 0x32a250
void sub_0032A110_0x32a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A110_0x32a110");
#endif

    switch (ctx->pc) {
        case 0x32a1ccu: goto label_32a1cc;
        default: break;
    }

    ctx->pc = 0x32a110u;

    // 0x32a110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a11c: 0x9485012c  lhu         $a1, 0x12C($a0)
    ctx->pc = 0x32a11cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x32a120: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x32a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x32a124: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x32A124u;
    {
        const bool branch_taken_0x32a124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A124u;
        // 0x32a128: 0x24900124  addiu       $s0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a124) {
            ctx->pc = 0x32A234u;
            goto label_32a234;
        }
    }
    ctx->pc = 0x32A12Cu;
    // 0x32a12c: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x32a12cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x32a130: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x32a130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x32a134: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32a134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32a138: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x32A138u;
    {
        const bool branch_taken_0x32a138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a138) {
            ctx->pc = 0x32A13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A138u;
            // 0x32a13c: 0x92020012  lbu         $v0, 0x12($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A1D0u;
            goto label_32a1d0;
        }
    }
    ctx->pc = 0x32A140u;
    // 0x32a140: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x32a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x32a144: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x32A144u;
    {
        const bool branch_taken_0x32a144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a144) {
            ctx->pc = 0x32A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A144u;
            // 0x32a148: 0xa2000012  sb          $zero, 0x12($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A190u;
            goto label_32a190;
        }
    }
    ctx->pc = 0x32A14Cu;
    // 0x32a14c: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x32a14cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a150: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x32a150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a154: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x32a154u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a158: 0x3042c000  andi        $v0, $v0, 0xC000
    ctx->pc = 0x32a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
    // 0x32a15c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A15Cu;
    {
        const bool branch_taken_0x32a15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a15c) {
            ctx->pc = 0x32A160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A15Cu;
            // 0x32a160: 0x96020008  lhu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A178u;
            goto label_32a178;
        }
    }
    ctx->pc = 0x32A164u;
    // 0x32a164: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x32a164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a168: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x32a168u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x32a16c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a170: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x32a170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a174: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x32a174u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_32a178:
    // 0x32a178: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x32a178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x32a17c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x32a17cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x32a180: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x32a180u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32a184: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x32a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x32a188: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32A188u;
    {
        const bool branch_taken_0x32a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A188u;
        // 0x32a18c: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a188) {
            ctx->pc = 0x32A1BCu;
            goto label_32a1bc;
        }
    }
    ctx->pc = 0x32A190u;
label_32a190:
    // 0x32a190: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x32a190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32a194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a198: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x32a198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a19c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x32a19cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a1a0: 0x3042c000  andi        $v0, $v0, 0xC000
    ctx->pc = 0x32a1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
    // 0x32a1a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A1A4u;
    {
        const bool branch_taken_0x32a1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1a4) {
            ctx->pc = 0x32A1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A1A4u;
            // 0x32a1a8: 0x96020008  lhu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A1C0u;
            goto label_32a1c0;
        }
    }
    ctx->pc = 0x32A1ACu;
    // 0x32a1ac: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x32a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a1b0: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x32a1b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x32a1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a1b8: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x32a1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
label_32a1bc:
    // 0x32a1bc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x32a1bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_32a1c0:
    // 0x32a1c0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x32a1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x32a1c4: 0xc0ca894  jal         func_32A250
    ctx->pc = 0x32A1C4u;
    SET_GPR_U32(ctx, 31, 0x32A1CCu);
    ctx->pc = 0x32A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1C4u;
    // 0x32a1c8: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A250u, 0x32A1C4u, 0x32A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1CCu;
label_32a1cc:
    // 0x32a1cc: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x32a1ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_32a1d0:
    // 0x32a1d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a1d4: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x32a1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a1d8: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x32a1d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a1dc: 0x3082c000  andi        $v0, $a0, 0xC000
    ctx->pc = 0x32a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)49152);
    // 0x32a1e0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x32A1E0u;
    {
        const bool branch_taken_0x32a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a1e0) {
            ctx->pc = 0x32A1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A1E0u;
            // 0x32a1e4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A22Cu;
            goto label_32a22c;
        }
    }
    ctx->pc = 0x32A1E8u;
    // 0x32a1e8: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x32a1e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x32a1ec: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x32a1ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x32a1f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32a1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32a1f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32A1F4u;
    {
        const bool branch_taken_0x32a1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a1f4) {
            ctx->pc = 0x32A228u;
            goto label_32a228;
        }
    }
    ctx->pc = 0x32A1FCu;
    // 0x32a1fc: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x32a1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x32a200: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x32a200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x32a204: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x32a204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a208: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x32a208u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a20c: 0x3063c000  andi        $v1, $v1, 0xC000
    ctx->pc = 0x32a20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49152);
    // 0x32a210: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32A210u;
    {
        const bool branch_taken_0x32a210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a210) {
            ctx->pc = 0x32A214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A210u;
            // 0x32a214: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A238u;
            goto label_32a238;
        }
    }
    ctx->pc = 0x32A218u;
    // 0x32a218: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x32a218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32a21c: 0x34420880  ori         $v0, $v0, 0x880
    ctx->pc = 0x32a21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2176);
    // 0x32a220: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32A220u;
    {
        const bool branch_taken_0x32a220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A220u;
        // 0x32a224: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a220) {
            ctx->pc = 0x32A234u;
            goto label_32a234;
        }
    }
    ctx->pc = 0x32A228u;
label_32a228:
    // 0x32a228: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x32a228u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_32a22c:
    // 0x32a22c: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x32a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x32a230: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x32a230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_32a234:
    // 0x32a234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32a238:
    // 0x32a238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32a238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a23c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a240: 0x3e00008  jr          $ra
    ctx->pc = 0x32A240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A240u;
        // 0x32a244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A248u;
    // 0x32a248: 0x0  nop
    ctx->pc = 0x32a248u;
    // NOP
    // 0x32a24c: 0x0  nop
    ctx->pc = 0x32a24cu;
    // NOP
}
