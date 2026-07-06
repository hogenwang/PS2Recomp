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

// Function: sub_00350D10
// Address: 0x350d10 - 0x350d80
void sub_00350D10_0x350d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350D10_0x350d10");
#endif

    ctx->pc = 0x350d10u;

    // 0x350d10: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x350d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x350d14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x350d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350d18: 0x9063f35b  lbu         $v1, -0xCA5($v1)
    ctx->pc = 0x350d18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964059)));
    // 0x350d1c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x350d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x350d20: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x350D20u;
    {
        const bool branch_taken_0x350d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x350D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D20u;
        // 0x350d24: 0xa085d9b0  sb          $a1, -0x2650($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294957488), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d20) {
            ctx->pc = 0x350D4Cu;
            goto label_350d4c;
        }
    }
    ctx->pc = 0x350D28u;
    // 0x350d28: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350d2c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x350d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x350d30: 0x8c65bec0  lw          $a1, -0x4140($v1)
    ctx->pc = 0x350d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950592)));
    // 0x350d34: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x350d34u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x350d38: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x350d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x350d3c: 0x0  nop
    ctx->pc = 0x350d3cu;
    // NOP
    // 0x350d40: 0x2010  mfhi        $a0
    ctx->pc = 0x350d40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x350d44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x350D44u;
    {
        const bool branch_taken_0x350d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D44u;
        // 0x350d48: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d44) {
            ctx->pc = 0x350D6Cu;
            goto label_350d6c;
        }
    }
    ctx->pc = 0x350D4Cu;
label_350d4c:
    // 0x350d4c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350d50: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x350d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x350d54: 0x8c65bec0  lw          $a1, -0x4140($v1)
    ctx->pc = 0x350d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950592)));
    // 0x350d58: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x350d58u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x350d5c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x350d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x350d60: 0x0  nop
    ctx->pc = 0x350d60u;
    // NOP
    // 0x350d64: 0x2010  mfhi        $a0
    ctx->pc = 0x350d64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x350d68: 0xa064f340  sb          $a0, -0xCC0($v1)
    ctx->pc = 0x350d68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
label_350d6c:
    // 0x350d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x350D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D74u;
    // 0x350d74: 0x0  nop
    ctx->pc = 0x350d74u;
    // NOP
    // 0x350d78: 0x0  nop
    ctx->pc = 0x350d78u;
    // NOP
    // 0x350d7c: 0x0  nop
    ctx->pc = 0x350d7cu;
    // NOP
    if (ctx->pc == 0x350d7cu) { ctx->pc = 0x350d80u; }
}
