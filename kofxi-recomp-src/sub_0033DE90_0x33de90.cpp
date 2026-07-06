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

// Function: sub_0033DE90
// Address: 0x33de90 - 0x33df10
void sub_0033DE90_0x33de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DE90_0x33de90");
#endif

    switch (ctx->pc) {
        case 0x33de98u: goto label_33de98;
        case 0x33dea0u: goto label_33dea0;
        default: break;
    }

    ctx->pc = 0x33de90u;

    // 0x33de90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33de94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33de94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33de98:
    // 0x33de98: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x33DE98u;
    SET_GPR_U32(ctx, 31, 0x33DEA0u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x33DE98u, 0x33DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DEA0u;
label_33dea0:
    // 0x33dea0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x33dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33dea4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33dea8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x33dea8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33deac: 0x2484e830  addiu       $a0, $a0, -0x17D0
    ctx->pc = 0x33deacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961200));
    // 0x33deb0: 0x0  nop
    ctx->pc = 0x33deb0u;
    // NOP
    // 0x33deb4: 0x1010  mfhi        $v0
    ctx->pc = 0x33deb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33deb8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x33deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33debc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x33debcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33dec0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x33dec0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33dec4: 0x1083fff4  beq         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x33DEC4u;
    {
        const bool branch_taken_0x33dec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33dec4) {
            ctx->pc = 0x33DE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33de98;
        }
    }
    ctx->pc = 0x33DECCu;
    // 0x33decc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x33deccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33ded0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x33ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x33ded4: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DED4u;
    {
        const bool branch_taken_0x33ded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ded4) {
            ctx->pc = 0x33DED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DED4u;
            // 0x33ded8: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DEECu;
            goto label_33deec;
        }
    }
    ctx->pc = 0x33DEDCu;
    // 0x33dedc: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x33dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x33dee0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33DEE0u;
    {
        const bool branch_taken_0x33dee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33dee0) {
            ctx->pc = 0x33DEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DEE0u;
            // 0x33dee4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DF00u;
            goto label_33df00;
        }
    }
    ctx->pc = 0x33DEE8u;
    // 0x33dee8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33deec:
    // 0x33deec: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33deecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33def0: 0xa064e84e  sb          $a0, -0x17B2($v1)
    ctx->pc = 0x33def0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961230), (uint8_t)GPR_U32(ctx, 4));
    // 0x33def4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33def4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33def8: 0xa064e85f  sb          $a0, -0x17A1($v1)
    ctx->pc = 0x33def8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961247), (uint8_t)GPR_U32(ctx, 4));
    // 0x33defc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33defcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33df00:
    // 0x33df00: 0x3e00008  jr          $ra
    ctx->pc = 0x33DF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF00u;
        // 0x33df04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DF08u;
    // 0x33df08: 0x0  nop
    ctx->pc = 0x33df08u;
    // NOP
    // 0x33df0c: 0x0  nop
    ctx->pc = 0x33df0cu;
    // NOP
    if (ctx->pc == 0x33df0cu) { ctx->pc = 0x33df10u; }
}
