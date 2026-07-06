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

// Function: sub_001E5240
// Address: 0x1e5240 - 0x1e5300
void sub_001E5240_0x1e5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5240_0x1e5240");
#endif

    switch (ctx->pc) {
        case 0x1e525cu: goto label_1e525c;
        case 0x1e52b0u: goto label_1e52b0;
        default: break;
    }

    ctx->pc = 0x1e5240u;

    // 0x1e5240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5248: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e5248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e524c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5254: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E5254u;
    SET_GPR_U32(ctx, 31, 0x1E525Cu);
    ctx->pc = 0x1E5258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5254u;
    // 0x1e5258: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E5254u, 0x1E525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E525Cu;
label_1e525c:
    // 0x1e525c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e525cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5264: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5264u;
    {
        const bool branch_taken_0x1e5264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5264u;
        // 0x1e5268: 0x2484e0b8  addiu       $a0, $a0, -0x1F48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5264) {
            ctx->pc = 0x1E5280u;
            goto label_1e5280;
        }
    }
    ctx->pc = 0x1E526Cu;
    // 0x1e526c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e526cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5278: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E5278u;
    ctx->pc = 0x1E527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5278u;
    // 0x1e527c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E5280u;
label_1e5280:
    // 0x1e5280: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5280u;
    {
        const bool branch_taken_0x1e5280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5280) {
            ctx->pc = 0x1E5284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5280u;
            // 0x1e5284: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E52A8u;
            goto label_1e52a8;
        }
    }
    ctx->pc = 0x1E5288u;
    // 0x1e5288: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e528c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e528cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5294: 0x2484e0e8  addiu       $a0, $a0, -0x1F18
    ctx->pc = 0x1e5294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959336));
    // 0x1e5298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e529c: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E529Cu;
    ctx->pc = 0x1E52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E529Cu;
    // 0x1e52a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E52A4u;
    // 0x1e52a4: 0x0  nop
    ctx->pc = 0x1e52a4u;
    // NOP
label_1e52a8:
    // 0x1e52a8: 0xc0717cc  jal         func_1C5F30
    ctx->pc = 0x1E52A8u;
    SET_GPR_U32(ctx, 31, 0x1E52B0u);
    ctx->pc = 0x1E52ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E52A8u;
    // 0x1e52ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F30u, 0x1E52A8u, 0x1E52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52B0u;
label_1e52b0:
    // 0x1e52b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e52b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e52b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e52b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e52b8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E52B8u;
    {
        const bool branch_taken_0x1e52b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52B8u;
        // 0x1e52bc: 0x2484e110  addiu       $a0, $a0, -0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52b8) {
            ctx->pc = 0x1E52E0u;
            goto label_1e52e0;
        }
    }
    ctx->pc = 0x1E52C0u;
    // 0x1e52c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e52c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e52c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e52c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e52cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e52ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e52d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e52d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e52d4: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E52D4u;
    ctx->pc = 0x1E52D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E52D4u;
    // 0x1e52d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E52DCu;
    // 0x1e52dc: 0x0  nop
    ctx->pc = 0x1e52dcu;
    // NOP
label_1e52e0:
    // 0x1e52e0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x1e52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1e52e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e52e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e52e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e52ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e52ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e52f0: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1e52f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x1e52f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e52f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e52f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52F8u;
        // 0x1e52fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E52F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5300u;
}
