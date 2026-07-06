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

// Function: sub_00217318
// Address: 0x217318 - 0x2173a8
void sub_00217318_0x217318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217318_0x217318");
#endif

    switch (ctx->pc) {
        case 0x217350u: goto label_217350;
        case 0x217388u: goto label_217388;
        default: break;
    }

    ctx->pc = 0x217318u;

label_217318:
    // 0x217318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21731c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21731cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217324: 0x24840e68  addiu       $a0, $a0, 0xE68
    ctx->pc = 0x217324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3688));
    // 0x217328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21732c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21732Cu;
    ctx->pc = 0x217330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21732Cu;
    // 0x217330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x217334u;
    // 0x217334: 0x0  nop
    ctx->pc = 0x217334u;
    // NOP
    // 0x217338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21733c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21733cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217340: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217340u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217348: 0xc085cc6  jal         func_217318
    ctx->pc = 0x217348u;
    SET_GPR_U32(ctx, 31, 0x217350u);
    ctx->pc = 0x21734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217348u;
    // 0x21734c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217318u;
    goto label_217318;
    ctx->pc = 0x217350u;
label_217350:
    // 0x217350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217358: 0x3e00008  jr          $ra
    ctx->pc = 0x217358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217358u;
        // 0x21735c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217360u;
    // 0x217360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217364: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217364u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21736c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21736cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217374: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x217374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217378: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x217378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21737c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21737cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217380: 0xc085cc6  jal         func_217318
    ctx->pc = 0x217380u;
    SET_GPR_U32(ctx, 31, 0x217388u);
    ctx->pc = 0x217384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217380u;
    // 0x217384: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217318u;
    goto label_217318;
    ctx->pc = 0x217388u;
label_217388:
    // 0x217388: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x217388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21738c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21738cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217390: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x217390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x217394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21739c: 0x3e00008  jr          $ra
    ctx->pc = 0x21739Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2173A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21739Cu;
        // 0x2173a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21739Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2173A4u;
    // 0x2173a4: 0x0  nop
    ctx->pc = 0x2173a4u;
    // NOP
}
