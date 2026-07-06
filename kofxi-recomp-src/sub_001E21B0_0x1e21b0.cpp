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

// Function: sub_001E21B0
// Address: 0x1e21b0 - 0x1e2238
void sub_001E21B0_0x1e21b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E21B0_0x1e21b0");
#endif

    switch (ctx->pc) {
        case 0x1e21d8u: goto label_1e21d8;
        case 0x1e21f8u: goto label_1e21f8;
        default: break;
    }

    ctx->pc = 0x1e21b0u;

    // 0x1e21b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e21b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e21b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e21b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e21b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e21b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e21bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e21c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e21c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21c4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1e21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e21c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e21c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e21cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e21ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e21d0: 0xc040938  jal         func_1024E0
    ctx->pc = 0x1E21D0u;
    SET_GPR_U32(ctx, 31, 0x1E21D8u);
    ctx->pc = 0x1E21D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21D0u;
    // 0x1e21d4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024E0u, 0x1E21D0u, 0x1E21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21D8u;
label_1e21d8:
    // 0x1e21d8: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x1e21d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1e21dc: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x1e21dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e21e0: 0xac510080  sw          $s1, 0x80($v0)
    ctx->pc = 0x1e21e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x1e21e4: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x1e21e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x1e21e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e21e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e21ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21f0: 0xc040a1e  jal         func_102878
    ctx->pc = 0x1E21F0u;
    SET_GPR_U32(ctx, 31, 0x1E21F8u);
    ctx->pc = 0x1E21F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E21F0u;
    // 0x1e21f4: 0x103103  sra         $a2, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102878u, 0x1E21F0u, 0x1E21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21F8u;
label_1e21f8:
    // 0x1e21f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e21f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e21fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2204: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e2204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2208: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e2208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e220c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E220Cu;
        // 0x1e2210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E220Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2214u;
    // 0x1e2214: 0x0  nop
    ctx->pc = 0x1e2214u;
    // NOP
    // 0x1e2218: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e2218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e221c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E221Cu;
        // 0x1e2220: 0xac4414fc  sw          $a0, 0x14FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5372), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E221Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2224u;
    // 0x1e2224: 0x0  nop
    ctx->pc = 0x1e2224u;
    // NOP
    // 0x1e2228: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e2228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e222c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E222Cu;
        // 0x1e2230: 0x8c6214fc  lw          $v0, 0x14FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5372)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E222Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2234u;
    // 0x1e2234: 0x0  nop
    ctx->pc = 0x1e2234u;
    // NOP
}
