#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201EB0
// Address: 0x201eb0 - 0x201f08
void sub_00201EB0_0x201eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201EB0_0x201eb0");
#endif

    switch (ctx->pc) {
        case 0x201ec4u: goto label_201ec4;
        case 0x201ed8u: goto label_201ed8;
        default: break;
    }

    ctx->pc = 0x201eb0u;

    // 0x201eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201eb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x201eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x201ebc: 0xc0807c2  jal         func_201F08
    ctx->pc = 0x201EBCu;
    SET_GPR_U32(ctx, 31, 0x201EC4u);
    ctx->pc = 0x201F08u;
    if (runtime->hasFunction(0x201F08u)) {
        auto targetFn = runtime->lookupFunction(0x201F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EC4u; }
        if (ctx->pc != 0x201EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201F08_0x201f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EC4u; }
        if (ctx->pc != 0x201EC4u) { return; }
    }
    ctx->pc = 0x201EC4u;
label_201ec4:
    // 0x201ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ec8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x201EC8u;
    {
        const bool branch_taken_0x201ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201EC8u;
            // 0x201ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ec8) {
            ctx->pc = 0x201EF8u;
            goto label_201ef8;
        }
    }
    ctx->pc = 0x201ED0u;
    // 0x201ed0: 0xc0807d6  jal         func_201F58
    ctx->pc = 0x201ED0u;
    SET_GPR_U32(ctx, 31, 0x201ED8u);
    ctx->pc = 0x201F58u;
    if (runtime->hasFunction(0x201F58u)) {
        auto targetFn = runtime->lookupFunction(0x201F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ED8u; }
        if (ctx->pc != 0x201ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201F58_0x201f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ED8u; }
        if (ctx->pc != 0x201ED8u) { return; }
    }
    ctx->pc = 0x201ED8u;
label_201ed8:
    // 0x201ed8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x201ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x201edc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x201edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x201ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x201ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201ee4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x201ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201ee8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x201ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201eec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x201eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x201ef0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x201ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x201ef4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x201ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_201ef8:
    // 0x201ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201efc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x201efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201f00: 0x3e00008  jr          $ra
    ctx->pc = 0x201F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F00u;
            // 0x201f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201F08u;
    ctx->pc = 0x201f08u;
}
