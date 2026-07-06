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

// Function: sub_0026D348
// Address: 0x26d348 - 0x26d3e8
void sub_0026D348_0x26d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D348_0x26d348");
#endif

    switch (ctx->pc) {
        case 0x26d3d8u: goto label_26d3d8;
        default: break;
    }

    ctx->pc = 0x26d348u;

    // 0x26d348: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x26d348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x26d34c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x26d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x26d350: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26d354: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26d354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26d358: 0x41e03  sra         $v1, $a0, 24
    ctx->pc = 0x26d358u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 24));
    // 0x26d35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d360: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x26d360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x26d364: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26D364u;
    {
        const bool branch_taken_0x26d364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D364u;
        // 0x26d368: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d364) {
            ctx->pc = 0x26D3C8u;
            goto label_26d3c8;
        }
    }
    ctx->pc = 0x26D36Cu;
    // 0x26d36c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26d370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26d370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26d374: 0x24429170  addiu       $v0, $v0, -0x6E90
    ctx->pc = 0x26d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938992));
    // 0x26d378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d37c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d380: 0x800008  jr          $a0
    ctx->pc = 0x26D380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D388u: goto label_26d388;
            case 0x26D390u: goto label_26d390;
            case 0x26D3A0u: goto label_26d3a0;
            case 0x26D3B4u: goto label_26d3b4;
            case 0x26D3C8u: goto label_26d3c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D380u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26D388u;
label_26d388:
    // 0x26d388: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26D388u;
    {
        const bool branch_taken_0x26d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D388u;
        // 0x26d38c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d388) {
            ctx->pc = 0x26D3B8u;
            goto label_26d3b8;
        }
    }
    ctx->pc = 0x26D390u;
label_26d390:
    // 0x26d390: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26D390u;
    {
        const bool branch_taken_0x26d390 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D390u;
        // 0x26d394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d390) {
            ctx->pc = 0x26D3DCu;
            goto label_26d3dc;
        }
    }
    ctx->pc = 0x26D398u;
    // 0x26d398: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26D398u;
    {
        const bool branch_taken_0x26d398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D398u;
        // 0x26d39c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d398) {
            ctx->pc = 0x26D3DCu;
            goto label_26d3dc;
        }
    }
    ctx->pc = 0x26D3A0u;
label_26d3a0:
    // 0x26d3a0: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x26d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x26d3a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26D3A4u;
    {
        const bool branch_taken_0x26d3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3A4u;
        // 0x26d3a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3a4) {
            ctx->pc = 0x26D3D8u;
            goto label_26d3d8;
        }
    }
    ctx->pc = 0x26D3ACu;
    // 0x26d3ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26D3ACu;
    {
        const bool branch_taken_0x26d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3ACu;
        // 0x26d3b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3ac) {
            ctx->pc = 0x26D3E0u;
            goto label_26d3e0;
        }
    }
    ctx->pc = 0x26D3B4u;
label_26d3b4:
    // 0x26d3b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d3b8:
    // 0x26d3b8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26D3B8u;
    {
        const bool branch_taken_0x26d3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3B8u;
        // 0x26d3bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3b8) {
            ctx->pc = 0x26D3D8u;
            goto label_26d3d8;
        }
    }
    ctx->pc = 0x26D3C0u;
    // 0x26d3c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26D3C0u;
    {
        const bool branch_taken_0x26d3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3C0u;
        // 0x26d3c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3c0) {
            ctx->pc = 0x26D3E0u;
            goto label_26d3e0;
        }
    }
    ctx->pc = 0x26D3C8u;
label_26d3c8:
    // 0x26d3c8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d3cc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26d3d0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D3D0u;
    SET_GPR_U32(ctx, 31, 0x26D3D8u);
    ctx->pc = 0x26D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3D0u;
    // 0x26d3d4: 0x24a59160  addiu       $a1, $a1, -0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26D3D0u, 0x26D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3D8u;
label_26d3d8:
    // 0x26d3d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d3dc:
    // 0x26d3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26d3e0:
    // 0x26d3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26D3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3E0u;
        // 0x26d3e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D3E8u;
}
