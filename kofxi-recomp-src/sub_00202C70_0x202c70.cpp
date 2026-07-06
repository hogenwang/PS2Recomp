#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202C70
// Address: 0x202c70 - 0x202cd0
void sub_00202C70_0x202c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202C70_0x202c70");
#endif

    switch (ctx->pc) {
        case 0x202cbcu: goto label_202cbc;
        default: break;
    }

    ctx->pc = 0x202c70u;

    // 0x202c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202c74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x202c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x202c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202c7c: 0x2c850011  sltiu       $a1, $a0, 0x11
    ctx->pc = 0x202c7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x202c80: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x202C80u;
    {
        const bool branch_taken_0x202c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C80u;
            // 0x202c84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c80) {
            ctx->pc = 0x202CC0u;
            goto label_202cc0;
        }
    }
    ctx->pc = 0x202C88u;
    // 0x202c88: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x202C88u;
    {
        const bool branch_taken_0x202c88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x202C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C88u;
            // 0x202c8c: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c88) {
            ctx->pc = 0x202CACu;
            goto label_202cac;
        }
    }
    ctx->pc = 0x202C90u;
    // 0x202c90: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x202c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x202c94: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x202C94u;
    {
        const bool branch_taken_0x202c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202C94u;
            // 0x202c98: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c94) {
            ctx->pc = 0x202CC0u;
            goto label_202cc0;
        }
    }
    ctx->pc = 0x202C9Cu;
    // 0x202c9c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x202c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x202ca0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202CA0u;
    {
        const bool branch_taken_0x202ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202CA0u;
            // 0x202ca4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ca0) {
            ctx->pc = 0x202CC0u;
            goto label_202cc0;
        }
    }
    ctx->pc = 0x202CA8u;
    // 0x202ca8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x202ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_202cac:
    // 0x202cac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cb0: 0x24c6f3a0  addiu       $a2, $a2, -0xC60
    ctx->pc = 0x202cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964128));
    // 0x202cb4: 0xc08063e  jal         func_2018F8
    ctx->pc = 0x202CB4u;
    SET_GPR_U32(ctx, 31, 0x202CBCu);
    ctx->pc = 0x202CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202CB4u;
            // 0x202cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    if (runtime->hasFunction(0x2018F8u)) {
        auto targetFn = runtime->lookupFunction(0x2018F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202CBCu; }
        if (ctx->pc != 0x202CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002018F8_0x2018f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202CBCu; }
        if (ctx->pc != 0x202CBCu) { return; }
    }
    ctx->pc = 0x202CBCu;
label_202cbc:
    // 0x202cbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x202cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202cc0:
    // 0x202cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202cc4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x202cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x202CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202CC8u;
            // 0x202ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202CD0u;
    ctx->pc = 0x202cd0u;
}
