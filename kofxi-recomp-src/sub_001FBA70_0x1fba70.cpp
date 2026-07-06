#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FBA70
// Address: 0x1fba70 - 0x1fbaf8
void sub_001FBA70_0x1fba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBA70_0x1fba70");
#endif

    switch (ctx->pc) {
        case 0x1fba98u: goto label_1fba98;
        default: break;
    }

    ctx->pc = 0x1fba70u;

    // 0x1fba70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fba74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fba78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fba78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba7c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1fba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1fba80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fba84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fba88: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1fba88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fba90: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FBA90u;
    SET_GPR_U32(ctx, 31, 0x1FBA98u);
    ctx->pc = 0x1FBA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA90u;
            // 0x1fba94: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA98u; }
        if (ctx->pc != 0x1FBA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA98u; }
        if (ctx->pc != 0x1FBA98u) { return; }
    }
    ctx->pc = 0x1FBA98u;
label_1fba98:
    // 0x1fba98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fba9c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FBA9Cu;
    {
        const bool branch_taken_0x1fba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fba9c) {
            ctx->pc = 0x1FBAC8u;
            goto label_1fbac8;
        }
    }
    ctx->pc = 0x1FBAA4u;
    // 0x1fbaa4: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x1fbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1fbaa8: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x1fbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1fbaac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fbaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbab0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1fbab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1fbab4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fbab8: 0x8c6216fc  lw          $v0, 0x16FC($v1)
    ctx->pc = 0x1fbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5884)));
    // 0x1fbabc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBABCu;
    {
        const bool branch_taken_0x1fbabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBABCu;
            // 0x1fbac0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbabc) {
            ctx->pc = 0x1FBAE0u;
            goto label_1fbae0;
        }
    }
    ctx->pc = 0x1FBAC4u;
    // 0x1fbac4: 0x0  nop
    ctx->pc = 0x1fbac4u;
    // NOP
label_1fbac8:
    // 0x1fbac8: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1fbacc: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x1fbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1fbad0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbad4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fbad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fbad8: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x1fbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1fbadc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1fbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1fbae0:
    // 0x1fbae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbaec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fbaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBAF0u;
            // 0x1fbaf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBAF8u;
    ctx->pc = 0x1fbaf8u;
}
