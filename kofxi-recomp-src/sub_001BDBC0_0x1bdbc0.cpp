#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDBC0
// Address: 0x1bdbc0 - 0x1bdc00
void sub_001BDBC0_0x1bdbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDBC0_0x1bdbc0");
#endif

    switch (ctx->pc) {
        case 0x1bdbe8u: goto label_1bdbe8;
        case 0x1bdbf8u: goto label_1bdbf8;
        default: break;
    }

    ctx->pc = 0x1bdbc0u;

    // 0x1bdbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bdbc4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bdbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDBC8u;
    {
        const bool branch_taken_0x1bdbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBC8u;
            // 0x1bdbcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdbc8) {
            ctx->pc = 0x1BDBE8u;
            goto label_1bdbe8;
        }
    }
    ctx->pc = 0x1BDBD0u;
    // 0x1bdbd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdbd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbd8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1bdbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bdbdc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bdbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bdbe0: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1BDBE0u;
    ctx->pc = 0x1BDBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBE0u;
            // 0x1bdbe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDBE8u;
label_1bdbe8:
    // 0x1bdbe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdbec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBECu;
            // 0x1bdbf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDBF4u;
    // 0x1bdbf4: 0x0  nop
    ctx->pc = 0x1bdbf4u;
    // NOP
label_1bdbf8:
    // 0x1bdbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBF8u;
            // 0x1bdbfc: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC00u;
    ctx->pc = 0x1bdc00u;
}
