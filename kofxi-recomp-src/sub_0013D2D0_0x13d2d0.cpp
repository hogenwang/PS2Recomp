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

// Function: sub_0013D2D0
// Address: 0x13d2d0 - 0x13d360
void sub_0013D2D0_0x13d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D2D0_0x13d2d0");
#endif

    switch (ctx->pc) {
        case 0x13d2e4u: goto label_13d2e4;
        case 0x13d340u: goto label_13d340;
        default: break;
    }

    ctx->pc = 0x13d2d0u;

    // 0x13d2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d2d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13d2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d2dc: 0xc04f6dc  jal         func_13DB70
    ctx->pc = 0x13D2DCu;
    SET_GPR_U32(ctx, 31, 0x13D2E4u);
    ctx->pc = 0x13D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D2DCu;
    // 0x13d2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DB70u, 0x13D2DCu, 0x13D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2E4u;
label_13d2e4:
    // 0x13d2e4: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13D2E4u;
    {
        const bool branch_taken_0x13d2e4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x13d2e4) {
            ctx->pc = 0x13D2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D2E4u;
            // 0x13d2e8: 0x8e03023c  lw          $v1, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D318u;
            goto label_13d318;
        }
    }
    ctx->pc = 0x13D2ECu;
    // 0x13d2ec: 0x8e05023c  lw          $a1, 0x23C($s0)
    ctx->pc = 0x13d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x13d2f0: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x13d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13d2f4: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x13d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x13d2f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d2fc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13d2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13d300: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d304: 0xae04023c  sw          $a0, 0x23C($s0)
    ctx->pc = 0x13d304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 4));
    // 0x13d308: 0xae03023c  sw          $v1, 0x23C($s0)
    ctx->pc = 0x13d308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
    // 0x13d30c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x13d30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x13d310: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13D310u;
    {
        const bool branch_taken_0x13d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D310u;
        // 0x13d314: 0xae03023c  sw          $v1, 0x23C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d310) {
            ctx->pc = 0x13D344u;
            goto label_13d344;
        }
    }
    ctx->pc = 0x13D318u;
label_13d318:
    // 0x13d318: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x13d318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x13d31c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13D31Cu;
    {
        const bool branch_taken_0x13d31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d31c) {
            ctx->pc = 0x13D320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D31Cu;
            // 0x13d320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D344u;
            goto label_13d344;
        }
    }
    ctx->pc = 0x13D324u;
    // 0x13d324: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x13d324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x13d328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d32c: 0xae03023c  sw          $v1, 0x23C($s0)
    ctx->pc = 0x13d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
    // 0x13d330: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13d330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d334: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x13d334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x13d338: 0xc0501d0  jal         func_140740
    ctx->pc = 0x13D338u;
    SET_GPR_U32(ctx, 31, 0x13D340u);
    ctx->pc = 0x13D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D338u;
    // 0x13d33c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x13D338u, 0x13D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D340u;
label_13d340:
    // 0x13d340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d344:
    // 0x13d344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d34c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D34Cu;
        // 0x13d350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D354u;
    // 0x13d354: 0x0  nop
    ctx->pc = 0x13d354u;
    // NOP
    // 0x13d358: 0x0  nop
    ctx->pc = 0x13d358u;
    // NOP
    // 0x13d35c: 0x0  nop
    ctx->pc = 0x13d35cu;
    // NOP
    if (ctx->pc == 0x13d35cu) { ctx->pc = 0x13d360u; }
}
