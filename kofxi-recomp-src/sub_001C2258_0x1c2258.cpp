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

// Function: sub_001C2258
// Address: 0x1c2258 - 0x1c22c0
void sub_001C2258_0x1c2258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2258_0x1c2258");
#endif

    switch (ctx->pc) {
        case 0x1c2280u: goto label_1c2280;
        case 0x1c2288u: goto label_1c2288;
        case 0x1c229cu: goto label_1c229c;
        default: break;
    }

    ctx->pc = 0x1c2258u;

    // 0x1c2258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c225c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c226c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c226cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2270: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c2270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2274: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x1c2274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c2278: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2278u;
    {
        const bool branch_taken_0x1c2278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2278u;
        // 0x1c227c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2278) {
            ctx->pc = 0x1C2294u;
            goto label_1c2294;
        }
    }
    ctx->pc = 0x1C2280u;
label_1c2280:
    // 0x1c2280: 0xc0709b0  jal         func_1C26C0
    ctx->pc = 0x1C2280u;
    SET_GPR_U32(ctx, 31, 0x1C2288u);
    ctx->pc = 0x1C26C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C26C0u, 0x1C2280u, 0x1C2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2288u;
label_1c2288:
    // 0x1c2288: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x1c2288u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c228c: 0x1051fffc  beq         $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1C228Cu;
    {
        const bool branch_taken_0x1c228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1c228c) {
            ctx->pc = 0x1C2280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2280;
        }
    }
    ctx->pc = 0x1C2294u;
label_1c2294:
    // 0x1c2294: 0xc0707e8  jal         func_1C1FA0
    ctx->pc = 0x1C2294u;
    SET_GPR_U32(ctx, 31, 0x1C229Cu);
    ctx->pc = 0x1C2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2294u;
    // 0x1c2298: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FA0u, 0x1C2294u, 0x1C229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C229Cu;
label_1c229c:
    // 0x1c229c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c22a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c22a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c22a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c22a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c22ac: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1c22acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1c22b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c22b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c22b4: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1C22B4u;
    ctx->pc = 0x1C22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22B4u;
    // 0x1c22b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C22BCu;
    // 0x1c22bc: 0x0  nop
    ctx->pc = 0x1c22bcu;
    // NOP
    if (ctx->pc == 0x1c22bcu) { ctx->pc = 0x1c22c0u; }
}
