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

// Function: sub_00276ED0
// Address: 0x276ed0 - 0x276f28
void sub_00276ED0_0x276ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276ED0_0x276ed0");
#endif

    switch (ctx->pc) {
        case 0x276f0cu: goto label_276f0c;
        default: break;
    }

    ctx->pc = 0x276ed0u;

    // 0x276ed0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x276ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x276ed4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x276ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ed8: 0x244231ac  addiu       $v0, $v0, 0x31AC
    ctx->pc = 0x276ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12716));
    // 0x276edc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276ee8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x276ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x276eec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x276eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x276ef0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x276ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x276ef4: 0x34c60130  ori         $a2, $a2, 0x130
    ctx->pc = 0x276ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)304);
    // 0x276ef8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x276ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x276efc: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x276efcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x276f00: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x276f00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x276f04: 0xc0b6ac0  jal         func_2DAB00
    ctx->pc = 0x276F04u;
    SET_GPR_U32(ctx, 31, 0x276F0Cu);
    ctx->pc = 0x276F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F04u;
    // 0x276f08: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB00u, 0x276F04u, 0x276F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F0Cu;
label_276f0c:
    // 0x276f0c: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x276f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x276f10: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x276f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x276f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276f18: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x276f18u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x276f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x276F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F1Cu;
        // 0x276f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276F24u;
    // 0x276f24: 0x0  nop
    ctx->pc = 0x276f24u;
    // NOP
    if (ctx->pc == 0x276f24u) { ctx->pc = 0x276f28u; }
}
