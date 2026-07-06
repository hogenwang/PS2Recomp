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

// Function: sub_002CA6D0
// Address: 0x2ca6d0 - 0x2ca7e0
void sub_002CA6D0_0x2ca6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA6D0_0x2ca6d0");
#endif

    switch (ctx->pc) {
        case 0x2ca710u: goto label_2ca710;
        case 0x2ca74cu: goto label_2ca74c;
        case 0x2ca760u: goto label_2ca760;
        case 0x2ca774u: goto label_2ca774;
        default: break;
    }

    ctx->pc = 0x2ca6d0u;

    // 0x2ca6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca6d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca6d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca6e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca6e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ca6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ca6e8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CA6E8u;
    {
        const bool branch_taken_0x2ca6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6E8u;
        // 0x2ca6ec: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6e8) {
            ctx->pc = 0x2CA774u;
            goto label_2ca774;
        }
    }
    ctx->pc = 0x2CA6F0u;
    // 0x2ca6f0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2ca6f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca6f4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CA6F4u;
    {
        const bool branch_taken_0x2ca6f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6F4u;
        // 0x2ca6f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6f4) {
            ctx->pc = 0x2CA734u;
            goto label_2ca734;
        }
    }
    ctx->pc = 0x2CA6FCu;
    // 0x2ca6fc: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CA6FCu;
    {
        const bool branch_taken_0x2ca6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6fc) {
            ctx->pc = 0x2CA744u;
            goto label_2ca744;
        }
    }
    ctx->pc = 0x2CA704u;
    // 0x2ca704: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ca704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca708: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x2ca708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2ca70c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ca70cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ca710:
    // 0x2ca710: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2ca710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ca714: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2ca714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca718: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA718u;
    {
        const bool branch_taken_0x2ca718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ca718) {
            ctx->pc = 0x2CA71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA718u;
            // 0x2ca71c: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA738u;
            goto label_2ca738;
        }
    }
    ctx->pc = 0x2CA720u;
    // 0x2ca720: 0x0  nop
    ctx->pc = 0x2ca720u;
    // NOP
    // 0x2ca724: 0x0  nop
    ctx->pc = 0x2ca724u;
    // NOP
    // 0x2ca728: 0x0  nop
    ctx->pc = 0x2ca728u;
    // NOP
    // 0x2ca72c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CA72Cu;
    {
        const bool branch_taken_0x2ca72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca72c) {
            ctx->pc = 0x2CA730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA72Cu;
            // 0x2ca730: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca710;
        }
    }
    ctx->pc = 0x2CA734u;
label_2ca734:
    // 0x2ca734: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ca734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ca738:
    // 0x2ca738: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2ca738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ca73c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA73Cu;
    {
        const bool branch_taken_0x2ca73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca73c) {
            ctx->pc = 0x2CA758u;
            goto label_2ca758;
        }
    }
    ctx->pc = 0x2CA744u;
label_2ca744:
    // 0x2ca744: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CA744u;
    SET_GPR_U32(ctx, 31, 0x2CA74Cu);
    ctx->pc = 0x2CA748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA744u;
    // 0x2ca748: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2CA744u, 0x2CA74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA74Cu;
label_2ca74c:
    // 0x2ca74c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA74Cu;
    {
        const bool branch_taken_0x2ca74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA74Cu;
        // 0x2ca750: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca74c) {
            ctx->pc = 0x2CA774u;
            goto label_2ca774;
        }
    }
    ctx->pc = 0x2CA754u;
    // 0x2ca754: 0x0  nop
    ctx->pc = 0x2ca754u;
    // NOP
label_2ca758:
    // 0x2ca758: 0xc0b60e6  jal         func_2D8398
    ctx->pc = 0x2CA758u;
    SET_GPR_U32(ctx, 31, 0x2CA760u);
    ctx->pc = 0x2CA75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA758u;
    // 0x2ca75c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2CA758u, 0x2CA760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA760u;
label_2ca760:
    // 0x2ca760: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ca760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ca764: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca768: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x2ca768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ca76c: 0xc0b60a2  jal         func_2D8288
    ctx->pc = 0x2CA76Cu;
    SET_GPR_U32(ctx, 31, 0x2CA774u);
    ctx->pc = 0x2CA770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA76Cu;
    // 0x2ca770: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8288u, 0x2CA76Cu, 0x2CA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA774u;
label_2ca774:
    // 0x2ca774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca77c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca780: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA780u;
        // 0x2ca784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA788u;
    // 0x2ca788: 0x2483f800  addiu       $v1, $a0, -0x800
    ctx->pc = 0x2ca788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965248));
    // 0x2ca78c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2ca78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ca790: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CA790u;
    {
        const bool branch_taken_0x2ca790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca790) {
            ctx->pc = 0x2CA7D8u;
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA798u;
    // 0x2ca798: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ca798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca79c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ca79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ca7a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ca7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca7a4: 0x8c63ef30  lw          $v1, -0x10D0($v1)
    ctx->pc = 0x2ca7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962992)));
    // 0x2ca7a8: 0x600008  jr          $v1
    ctx->pc = 0x2CA7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CA7B0u: goto label_2ca7b0;
            case 0x2CA7B8u: goto label_2ca7b8;
            case 0x2CA7C0u: goto label_2ca7c0;
            case 0x2CA7C8u: goto label_2ca7c8;
            case 0x2CA7D0u: goto label_2ca7d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CA7B0u;
label_2ca7b0:
    // 0x2ca7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7B0u;
        // 0x2ca7b4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7B8u;
label_2ca7b8:
    // 0x2ca7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7B8u;
        // 0x2ca7bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7C0u;
label_2ca7c0:
    // 0x2ca7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7C0u;
        // 0x2ca7c4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7C8u;
label_2ca7c8:
    // 0x2ca7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7C8u;
        // 0x2ca7cc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7D0u;
label_2ca7d0:
    // 0x2ca7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7D0u;
        // 0x2ca7d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7D8u;
label_2ca7d8:
    // 0x2ca7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7D8u;
        // 0x2ca7dc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA7E0u;
}
