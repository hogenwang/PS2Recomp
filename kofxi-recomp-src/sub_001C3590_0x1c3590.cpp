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

// Function: sub_001C3590
// Address: 0x1c3590 - 0x1c3728
void sub_001C3590_0x1c3590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3590_0x1c3590");
#endif

    switch (ctx->pc) {
        case 0x1c3600u: goto label_1c3600;
        case 0x1c3674u: goto label_1c3674;
        case 0x1c367cu: goto label_1c367c;
        default: break;
    }

    ctx->pc = 0x1c3590u;

    // 0x1c3590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c3590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c3594: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c3594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c3598: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c3598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c359c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c359cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c35a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c35a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c35a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c35a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c35a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35ac: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c35acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c35b0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1c35b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35b4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1c35b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1c35b8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1c35b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c35bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c35c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c35c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c35c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c35c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c35c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c35cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c35ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c35d0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1c35d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1c35d4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c35d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c35d8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1c35d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c35dc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C35DCu;
    {
        const bool branch_taken_0x1c35dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35DCu;
        // 0x1c35e0: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35dc) {
            ctx->pc = 0x1C36C8u;
            goto label_1c36c8;
        }
    }
    ctx->pc = 0x1C35E4u;
    // 0x1c35e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c35e8: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x1c35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x1c35ec: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x1c35ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c35f0: 0x241e000d  addiu       $fp, $zero, 0xD
    ctx->pc = 0x1c35f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c35f4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1c35f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c35f8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1c35f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c35fc: 0x0  nop
    ctx->pc = 0x1c35fcu;
    // NOP
label_1c3600:
    // 0x1c3600: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3600u;
    {
        const bool branch_taken_0x1c3600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1c3600) {
            ctx->pc = 0x1C3604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3600u;
            // 0x1c3604: 0x80a20001  lb          $v0, 0x1($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3614u;
            goto label_1c3614;
        }
    }
    ctx->pc = 0x1C3608u;
    // 0x1c3608: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C3608u;
    {
        const bool branch_taken_0x1c3608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3608u;
        // 0x1c360c: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3608) {
            ctx->pc = 0x1C36A4u;
            goto label_1c36a4;
        }
    }
    ctx->pc = 0x1C3610u;
    // 0x1c3610: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x1c3610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1c3614:
    // 0x1c3614: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3614u;
    {
        const bool branch_taken_0x1c3614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1c3614) {
            ctx->pc = 0x1C3618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3614u;
            // 0x1c3618: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C361Cu;
    // 0x1c361c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C361Cu;
    {
        const bool branch_taken_0x1c361c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C361Cu;
        // 0x1c3620: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c361c) {
            ctx->pc = 0x1C3630u;
            goto label_1c3630;
        }
    }
    ctx->pc = 0x1C3624u;
    // 0x1c3624: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c3624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c3628:
    // 0x1c3628: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x1c3628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1c362c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1c362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1c3630:
    // 0x1c3630: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c3630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3634: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3634u;
    {
        const bool branch_taken_0x1c3634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3634u;
        // 0x1c3638: 0x2448823  subu        $s1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3634) {
            ctx->pc = 0x1C3644u;
            goto label_1c3644;
        }
    }
    ctx->pc = 0x1C363Cu;
    // 0x1c363c: 0x145e0003  bne         $v0, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C363Cu;
    {
        const bool branch_taken_0x1c363c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x1C3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C363Cu;
        // 0x1c3640: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c363c) {
            ctx->pc = 0x1C364Cu;
            goto label_1c364c;
        }
    }
    ctx->pc = 0x1C3644u;
label_1c3644:
    // 0x1c3644: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1c3644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3648: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x1c3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_1c364c:
    // 0x1c364c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1c364cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3650: 0x50740004  beql        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3650u;
    {
        const bool branch_taken_0x1c3650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x1c3650) {
            ctx->pc = 0x1C3654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3650u;
            // 0x1c3654: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3664u;
            goto label_1c3664;
        }
    }
    ctx->pc = 0x1C3658u;
    // 0x1c3658: 0x147e0003  bne         $v1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3658u;
    {
        const bool branch_taken_0x1c3658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x1C365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3658u;
        // 0x1c365c: 0x2642821  addu        $a1, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3658) {
            ctx->pc = 0x1C3668u;
            goto label_1c3668;
        }
    }
    ctx->pc = 0x1C3660u;
    // 0x1c3660: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1c3660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c3664:
    // 0x1c3664: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x1c3664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1c3668:
    // 0x1c3668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c366c: 0xc049c48  jal         func_127120
    ctx->pc = 0x1C366Cu;
    SET_GPR_U32(ctx, 31, 0x1C3674u);
    ctx->pc = 0x1C3670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C366Cu;
    // 0x1c3670: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1C366Cu, 0x1C3674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3674u;
label_1c3674:
    // 0x1c3674: 0xc070a60  jal         func_1C2980
    ctx->pc = 0x1C3674u;
    SET_GPR_U32(ctx, 31, 0x1C367Cu);
    ctx->pc = 0x1C3678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3674u;
    // 0x1c3678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2980u, 0x1C3674u, 0x1C367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C367Cu;
label_1c367c:
    // 0x1c367c: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x1c367cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1c3680: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x1c3680u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x1c3684: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3684u;
    {
        const bool branch_taken_0x1c3684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3684) {
            ctx->pc = 0x1C3688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3684u;
            // 0x1c3688: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C368Cu;
            goto label_1c368c;
        }
    }
    ctx->pc = 0x1C368Cu;
label_1c368c:
    // 0x1c368c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1c368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c3690: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x1c3690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1c3694: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c3694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1c3698: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x1c3698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c369c: 0x12b6000a  beq         $s5, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x1C369Cu;
    {
        const bool branch_taken_0x1c369c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C369Cu;
        // 0x1c36a0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c369c) {
            ctx->pc = 0x1C36C8u;
            goto label_1c36c8;
        }
    }
    ctx->pc = 0x1C36A4u;
label_1c36a4:
    // 0x1c36a4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1c36a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c36a8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1c36a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c36ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C36ACu;
    {
        const bool branch_taken_0x1c36ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36ACu;
        // 0x1c36b0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36ac) {
            ctx->pc = 0x1C36C8u;
            goto label_1c36c8;
        }
    }
    ctx->pc = 0x1C36B4u;
    // 0x1c36b4: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x1c36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1c36b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c36b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36bc: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1c36bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c36c0: 0x5460ffcf  bnel        $v1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1C36C0u;
    {
        const bool branch_taken_0x1c36c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c36c0) {
            ctx->pc = 0x1C36C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C36C0u;
            // 0x1c36c4: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3600;
        }
    }
    ctx->pc = 0x1C36C8u;
label_1c36c8:
    // 0x1c36c8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c36cc: 0x2442e990  addiu       $v0, $v0, -0x1670
    ctx->pc = 0x1c36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
    // 0x1c36d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c36d4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C36D4u;
    {
        const bool branch_taken_0x1c36d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c36d4) {
            ctx->pc = 0x1C36D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C36D4u;
            // 0x1c36d8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C36F4u;
            goto label_1c36f4;
        }
    }
    ctx->pc = 0x1C36DCu;
    // 0x1c36dc: 0xac57000c  sw          $s7, 0xC($v0)
    ctx->pc = 0x1c36dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 23));
    // 0x1c36e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c36e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c36e4: 0xac560008  sw          $s6, 0x8($v0)
    ctx->pc = 0x1c36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    // 0x1c36e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c36e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c36ec: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x1c36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x1c36f0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1c36f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c36f4:
    // 0x1c36f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c36f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c36f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c36f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c36fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c36fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3700: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c3700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3704: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c3704u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3708: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c3708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c370c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c370cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3710: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1c3710u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c3714: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1c3714u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3718: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c3718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c371c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C371Cu;
        // 0x1c3720: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3724u;
    // 0x1c3724: 0x0  nop
    ctx->pc = 0x1c3724u;
    // NOP
}
