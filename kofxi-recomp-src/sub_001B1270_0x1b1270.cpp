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

// Function: sub_001B1270
// Address: 0x1b1270 - 0x1b12c0
void sub_001B1270_0x1b1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1270_0x1b1270");
#endif

    switch (ctx->pc) {
        case 0x1b1290u: goto label_1b1290;
        default: break;
    }

    ctx->pc = 0x1b1270u;

    // 0x1b1270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1278: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b1278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b127c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B127Cu;
    {
        const bool branch_taken_0x1b127c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B127Cu;
        // 0x1b1280: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b127c) {
            ctx->pc = 0x1B12A0u;
            goto label_1b12a0;
        }
    }
    ctx->pc = 0x1B1284u;
    // 0x1b1284: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b1284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b1288: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B1288u;
    SET_GPR_U32(ctx, 31, 0x1B1290u);
    ctx->pc = 0x1B128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1288u;
    // 0x1b128c: 0x24847a08  addiu       $a0, $a0, 0x7A08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B1288u, 0x1B1290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1290u;
label_1b1290:
    // 0x1b1290: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b1290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b1294: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1294u;
    {
        const bool branch_taken_0x1b1294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1294u;
        // 0x1b1298: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1294) {
            ctx->pc = 0x1B12ACu;
            goto label_1b12ac;
        }
    }
    ctx->pc = 0x1B129Cu;
    // 0x1b129c: 0x0  nop
    ctx->pc = 0x1b129cu;
    // NOP
label_1b12a0:
    // 0x1b12a0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b12a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b12a8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1b12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1b12ac:
    // 0x1b12ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b12acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b12b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b12b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b12b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B12B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B4u;
        // 0x1b12b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B12B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B12BCu;
    // 0x1b12bc: 0x0  nop
    ctx->pc = 0x1b12bcu;
    // NOP
    if (ctx->pc == 0x1b12bcu) { ctx->pc = 0x1b12c0u; }
}
