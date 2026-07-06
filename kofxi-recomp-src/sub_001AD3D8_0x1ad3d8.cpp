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

// Function: sub_001AD3D8
// Address: 0x1ad3d8 - 0x1ad500
void sub_001AD3D8_0x1ad3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD3D8_0x1ad3d8");
#endif

    switch (ctx->pc) {
        case 0x1ad408u: goto label_1ad408;
        case 0x1ad4d4u: goto label_1ad4d4;
        default: break;
    }

    ctx->pc = 0x1ad3d8u;

    // 0x1ad3d8: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x1ad3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x1ad3dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ad3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ad3e0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1ad3e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1ad3e4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1ad3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ad3e8: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AD3E8u;
    {
        const bool branch_taken_0x1ad3e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1AD3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3E8u;
        // 0x1ad3ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3e8) {
            ctx->pc = 0x1AD434u;
            goto label_1ad434;
        }
    }
    ctx->pc = 0x1AD3F0u;
    // 0x1ad3f0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1ad3f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ad3f4: 0x54490004  bnel        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD3F4u;
    {
        const bool branch_taken_0x1ad3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ad3f4) {
            ctx->pc = 0x1AD3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD3F4u;
            // 0x1ad3f8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD408u;
            goto label_1ad408;
        }
    }
    ctx->pc = 0x1AD3FCu;
    // 0x1ad3fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AD3FCu;
    {
        const bool branch_taken_0x1ad3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3FCu;
        // 0x1ad400: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3fc) {
            ctx->pc = 0x1AD434u;
            goto label_1ad434;
        }
    }
    ctx->pc = 0x1AD404u;
    // 0x1ad404: 0x0  nop
    ctx->pc = 0x1ad404u;
    // NOP
label_1ad408:
    // 0x1ad408: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x1ad408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ad40c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD40Cu;
    {
        const bool branch_taken_0x1ad40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD40Cu;
        // 0x1ad410: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad40c) {
            ctx->pc = 0x1AD434u;
            goto label_1ad434;
        }
    }
    ctx->pc = 0x1AD414u;
    // 0x1ad414: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1ad414u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad418: 0x0  nop
    ctx->pc = 0x1ad418u;
    // NOP
    // 0x1ad41c: 0x0  nop
    ctx->pc = 0x1ad41cu;
    // NOP
    // 0x1ad420: 0x0  nop
    ctx->pc = 0x1ad420u;
    // NOP
    // 0x1ad424: 0x5449fff8  bnel        $v0, $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AD424u;
    {
        const bool branch_taken_0x1ad424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ad424) {
            ctx->pc = 0x1AD428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD424u;
            // 0x1ad428: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ad408;
        }
    }
    ctx->pc = 0x1AD42Cu;
    // 0x1ad42c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1ad42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1ad430: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x1ad430u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_1ad434:
    // 0x1ad434: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1ad434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1ad438: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ad438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ad43c: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD43Cu;
    {
        const bool branch_taken_0x1ad43c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad43c) {
            ctx->pc = 0x1AD440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD43Cu;
            // 0x1ad440: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD450u;
            goto label_1ad450;
        }
    }
    ctx->pc = 0x1AD444u;
    // 0x1ad444: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x1ad444u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1ad448: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD448u;
        // 0x1ad44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD450u;
label_1ad450:
    // 0x1ad450: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD450u;
        // 0x1ad454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD458u;
    // 0x1ad458: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ad458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad45c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad460: 0x29030010  slti        $v1, $t0, 0x10
    ctx->pc = 0x1ad460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ad464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ad464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ad468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad46c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ad46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad470: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad474: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ad474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad478: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AD478u;
    {
        const bool branch_taken_0x1ad478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD478u;
        // 0x1ad47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad478) {
            ctx->pc = 0x1AD4E8u;
            goto label_1ad4e8;
        }
    }
    ctx->pc = 0x1AD480u;
    // 0x1ad480: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1ad480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ad484: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1ad484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ad488: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x1ad488u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1ad48c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ad48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad490: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ad490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ad494: 0x14850015  bne         $a0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AD494u;
    {
        const bool branch_taken_0x1ad494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD494u;
        // 0x1ad498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad494) {
            ctx->pc = 0x1AD4ECu;
            goto label_1ad4ec;
        }
    }
    ctx->pc = 0x1AD49Cu;
    // 0x1ad49c: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x1ad49cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1ad4a0: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x1ad4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1ad4a4: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x1ad4a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1ad4a8: 0xa8282a  slt         $a1, $a1, $t0
    ctx->pc = 0x1ad4a8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1ad4ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad4b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad4b4: 0x2464fffe  addiu       $a0, $v1, -0x2
    ctx->pc = 0x1ad4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1ad4b8: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x1ad4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ad4bc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD4BCu;
    {
        const bool branch_taken_0x1ad4bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4BCu;
        // 0x1ad4c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4bc) {
            ctx->pc = 0x1AD4E8u;
            goto label_1ad4e8;
        }
    }
    ctx->pc = 0x1AD4C4u;
    // 0x1ad4c4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1ad4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1ad4c8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1ad4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ad4cc: 0xc049c22  jal         func_127088
    ctx->pc = 0x1AD4CCu;
    SET_GPR_U32(ctx, 31, 0x1AD4D4u);
    ctx->pc = 0x1AD4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4CCu;
    // 0x1ad4d0: 0x24a57330  addiu       $a1, $a1, 0x7330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1AD4CCu, 0x1AD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4D4u;
label_1ad4d4:
    // 0x1ad4d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD4D4u;
    {
        const bool branch_taken_0x1ad4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4D4u;
        // 0x1ad4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4d4) {
            ctx->pc = 0x1AD4E8u;
            goto label_1ad4e8;
        }
    }
    ctx->pc = 0x1AD4DCu;
    // 0x1ad4dc: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD4DCu;
    {
        const bool branch_taken_0x1ad4dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad4dc) {
            ctx->pc = 0x1AD4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD4DCu;
            // 0x1ad4e0: 0xa6300000  sh          $s0, 0x0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD4E4u;
            goto label_1ad4e4;
        }
    }
    ctx->pc = 0x1AD4E4u;
label_1ad4e4:
    // 0x1ad4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad4e8:
    // 0x1ad4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad4ec:
    // 0x1ad4ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad4ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4F4u;
        // 0x1ad4f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD4FCu;
    // 0x1ad4fc: 0x0  nop
    ctx->pc = 0x1ad4fcu;
    // NOP
    if (ctx->pc == 0x1ad4fcu) { ctx->pc = 0x1ad500u; }
}
