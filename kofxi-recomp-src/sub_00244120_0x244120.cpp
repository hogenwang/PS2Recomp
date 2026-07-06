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

// Function: sub_00244120
// Address: 0x244120 - 0x244218
void sub_00244120_0x244120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244120_0x244120");
#endif

    switch (ctx->pc) {
        case 0x244120u: goto label_244120;
        case 0x244124u: goto label_244124;
        case 0x244128u: goto label_244128;
        case 0x24412cu: goto label_24412c;
        case 0x244130u: goto label_244130;
        case 0x244134u: goto label_244134;
        case 0x244138u: goto label_244138;
        case 0x24413cu: goto label_24413c;
        case 0x244140u: goto label_244140;
        case 0x244144u: goto label_244144;
        case 0x244148u: goto label_244148;
        case 0x24414cu: goto label_24414c;
        case 0x244150u: goto label_244150;
        case 0x244154u: goto label_244154;
        case 0x244158u: goto label_244158;
        case 0x24415cu: goto label_24415c;
        case 0x244160u: goto label_244160;
        case 0x244164u: goto label_244164;
        case 0x244168u: goto label_244168;
        case 0x24416cu: goto label_24416c;
        case 0x244170u: goto label_244170;
        case 0x244174u: goto label_244174;
        case 0x244178u: goto label_244178;
        case 0x24417cu: goto label_24417c;
        case 0x244180u: goto label_244180;
        case 0x244184u: goto label_244184;
        case 0x244188u: goto label_244188;
        case 0x24418cu: goto label_24418c;
        case 0x244190u: goto label_244190;
        case 0x244194u: goto label_244194;
        case 0x244198u: goto label_244198;
        case 0x24419cu: goto label_24419c;
        case 0x2441a0u: goto label_2441a0;
        case 0x2441a4u: goto label_2441a4;
        case 0x2441a8u: goto label_2441a8;
        case 0x2441acu: goto label_2441ac;
        case 0x2441b0u: goto label_2441b0;
        case 0x2441b4u: goto label_2441b4;
        case 0x2441b8u: goto label_2441b8;
        case 0x2441bcu: goto label_2441bc;
        case 0x2441c0u: goto label_2441c0;
        case 0x2441c4u: goto label_2441c4;
        case 0x2441c8u: goto label_2441c8;
        case 0x2441ccu: goto label_2441cc;
        case 0x2441d0u: goto label_2441d0;
        case 0x2441d4u: goto label_2441d4;
        case 0x2441d8u: goto label_2441d8;
        case 0x2441dcu: goto label_2441dc;
        case 0x2441e0u: goto label_2441e0;
        case 0x2441e4u: goto label_2441e4;
        case 0x2441e8u: goto label_2441e8;
        case 0x2441ecu: goto label_2441ec;
        case 0x2441f0u: goto label_2441f0;
        case 0x2441f4u: goto label_2441f4;
        case 0x2441f8u: goto label_2441f8;
        case 0x2441fcu: goto label_2441fc;
        case 0x244200u: goto label_244200;
        case 0x244204u: goto label_244204;
        case 0x244208u: goto label_244208;
        case 0x24420cu: goto label_24420c;
        case 0x244210u: goto label_244210;
        case 0x244214u: goto label_244214;
        default: break;
    }

    ctx->pc = 0x244120u;

label_244120:
    // 0x244120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x244120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_244124:
    // 0x244124: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x244124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_244128:
    // 0x244128: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x244128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_24412c:
    // 0x24412c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_244130:
    // 0x244130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244134:
    // 0x244134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244138:
    // 0x244138: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x244138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_24413c:
    // 0x24413c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_244140:
    if (ctx->pc == 0x244140u) {
        ctx->pc = 0x244140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24413Cu;
        // 0x244140: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244144u;
        goto label_244144;
    }
    ctx->pc = 0x24413Cu;
    {
        const bool branch_taken_0x24413c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24413Cu;
        // 0x244140: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24413c) {
            ctx->pc = 0x2441DCu;
            goto label_2441dc;
        }
    }
    ctx->pc = 0x244144u;
label_244144:
    // 0x244144: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x244144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_244148:
    // 0x244148: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_24414c:
    if (ctx->pc == 0x24414Cu) {
        ctx->pc = 0x24414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244148u;
        // 0x24414c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244150u;
        goto label_244150;
    }
    ctx->pc = 0x244148u;
    {
        const bool branch_taken_0x244148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244148u;
        // 0x24414c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244148) {
            ctx->pc = 0x24415Cu;
            goto label_24415c;
        }
    }
    ctx->pc = 0x244150u;
label_244150:
    // 0x244150: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x244150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_244154:
    // 0x244154: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x244154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_244158:
    // 0x244158: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x244158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24415c:
    // 0x24415c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24415cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_244160:
    // 0x244160: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x244160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244164:
    // 0x244164: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_244168:
    if (ctx->pc == 0x244168u) {
        ctx->pc = 0x244168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244164u;
        // 0x244168: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24416Cu;
        goto label_24416c;
    }
    ctx->pc = 0x244164u;
    {
        const bool branch_taken_0x244164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244164u;
        // 0x244168: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244164) {
            ctx->pc = 0x244178u;
            goto label_244178;
        }
    }
    ctx->pc = 0x24416Cu;
label_24416c:
    // 0x24416c: 0x10000003  b           . + 4 + (0x3 << 2)
label_244170:
    if (ctx->pc == 0x244170u) {
        ctx->pc = 0x244170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24416Cu;
        // 0x244170: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244174u;
        goto label_244174;
    }
    ctx->pc = 0x24416Cu;
    {
        const bool branch_taken_0x24416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24416Cu;
        // 0x244170: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24416c) {
            ctx->pc = 0x24417Cu;
            goto label_24417c;
        }
    }
    ctx->pc = 0x244174u;
label_244174:
    // 0x244174: 0x0  nop
    ctx->pc = 0x244174u;
    // NOP
label_244178:
    // 0x244178: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x244178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_24417c:
    // 0x24417c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x24417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_244180:
    // 0x244180: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x244180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244184:
    // 0x244184: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_244188:
    if (ctx->pc == 0x244188u) {
        ctx->pc = 0x244188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244184u;
        // 0x244188: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24418Cu;
        goto label_24418c;
    }
    ctx->pc = 0x244184u;
    {
        const bool branch_taken_0x244184 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x244188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244184u;
        // 0x244188: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244184) {
            ctx->pc = 0x2441C8u;
            goto label_2441c8;
        }
    }
    ctx->pc = 0x24418Cu;
label_24418c:
    // 0x24418c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_244190:
    // 0x244190: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_244194:
    if (ctx->pc == 0x244194u) {
        ctx->pc = 0x244194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244190u;
        // 0x244194: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244198u;
        goto label_244198;
    }
    ctx->pc = 0x244190u;
    {
        const bool branch_taken_0x244190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244190) {
            ctx->pc = 0x244194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244190u;
            // 0x244194: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2441ACu;
            goto label_2441ac;
        }
    }
    ctx->pc = 0x244198u;
label_244198:
    // 0x244198: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x244198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24419c:
    // 0x24419c: 0x40f809  jalr        $v0
label_2441a0:
    if (ctx->pc == 0x2441A0u) {
        ctx->pc = 0x2441A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24419Cu;
        // 0x2441a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441A4u;
        goto label_2441a4;
    }
    ctx->pc = 0x24419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2441A4u);
        ctx->pc = 0x2441A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24419Cu;
        // 0x2441a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24419Cu, 0x2441A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2441A4u;
label_2441a4:
    // 0x2441a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2441a8:
    if (ctx->pc == 0x2441A8u) {
        ctx->pc = 0x2441ACu;
        goto label_2441ac;
    }
    ctx->pc = 0x2441A4u;
    {
        const bool branch_taken_0x2441a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2441a4) {
            ctx->pc = 0x2441C8u;
            goto label_2441c8;
        }
    }
    ctx->pc = 0x2441ACu;
label_2441ac:
    // 0x2441ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2441acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2441b0:
    // 0x2441b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2441b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2441b4:
    // 0x2441b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2441b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2441b8:
    // 0x2441b8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2441b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2441bc:
    // 0x2441bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2441bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2441c0:
    // 0x2441c0: 0xc090d8e  jal         func_243638
label_2441c4:
    if (ctx->pc == 0x2441C4u) {
        ctx->pc = 0x2441C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441C0u;
        // 0x2441c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441C8u;
        goto label_2441c8;
    }
    ctx->pc = 0x2441C0u;
    SET_GPR_U32(ctx, 31, 0x2441C8u);
    ctx->pc = 0x2441C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441C0u;
    // 0x2441c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x2441C0u, 0x2441C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441C8u;
label_2441c8:
    // 0x2441c8: 0xc098560  jal         func_261580
label_2441cc:
    if (ctx->pc == 0x2441CCu) {
        ctx->pc = 0x2441CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441C8u;
        // 0x2441cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441D0u;
        goto label_2441d0;
    }
    ctx->pc = 0x2441C8u;
    SET_GPR_U32(ctx, 31, 0x2441D0u);
    ctx->pc = 0x2441CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441C8u;
    // 0x2441cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2441C8u, 0x2441D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441D0u;
label_2441d0:
    // 0x2441d0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2441d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2441d4:
    // 0x2441d4: 0x5600ffdc  bnel        $s0, $zero, . + 4 + (-0x24 << 2)
label_2441d8:
    if (ctx->pc == 0x2441D8u) {
        ctx->pc = 0x2441D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441D4u;
        // 0x2441d8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441DCu;
        goto label_2441dc;
    }
    ctx->pc = 0x2441D4u;
    {
        const bool branch_taken_0x2441d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2441d4) {
            ctx->pc = 0x2441D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2441D4u;
            // 0x2441d8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244148;
        }
    }
    ctx->pc = 0x2441DCu;
label_2441dc:
    // 0x2441dc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2441dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2441e0:
    // 0x2441e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2441e4:
    if (ctx->pc == 0x2441E4u) {
        ctx->pc = 0x2441E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441E0u;
        // 0x2441e4: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441E8u;
        goto label_2441e8;
    }
    ctx->pc = 0x2441E0u;
    {
        const bool branch_taken_0x2441e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441E0u;
        // 0x2441e4: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441e0) {
            ctx->pc = 0x2441F8u;
            goto label_2441f8;
        }
    }
    ctx->pc = 0x2441E8u;
label_2441e8:
    // 0x2441e8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2441e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2441ec:
    // 0x2441ec: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2441ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2441f0:
    // 0x2441f0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2441f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2441f4:
    // 0x2441f4: 0x0  nop
    ctx->pc = 0x2441f4u;
    // NOP
label_2441f8:
    // 0x2441f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2441f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2441fc:
    // 0x2441fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2441fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_244200:
    // 0x244200: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x244200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_244204:
    // 0x244204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244208:
    // 0x244208: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x244208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24420c:
    // 0x24420c: 0x3e00008  jr          $ra
label_244210:
    if (ctx->pc == 0x244210u) {
        ctx->pc = 0x244210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24420Cu;
        // 0x244210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244214u;
        goto label_244214;
    }
    ctx->pc = 0x24420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24420Cu;
        // 0x244210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244214u;
label_244214:
    // 0x244214: 0x0  nop
    ctx->pc = 0x244214u;
    // NOP
}
