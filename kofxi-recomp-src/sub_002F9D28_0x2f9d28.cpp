#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F9D28
// Address: 0x2f9d28 - 0x2f9d90
void sub_002F9D28_0x2f9d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9D28_0x2f9d28");
#endif

    switch (ctx->pc) {
        case 0x2f9d44u: goto label_2f9d44;
        default: break;
    }

    ctx->pc = 0x2f9d28u;

    // 0x2f9d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9d2c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9D2Cu;
    {
        const bool branch_taken_0x2f9d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D2Cu;
            // 0x2f9d30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d2c) {
            ctx->pc = 0x2F9D3Cu;
            goto label_2f9d3c;
        }
    }
    ctx->pc = 0x2F9D34u;
    // 0x2f9d34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F9D34u;
    {
        const bool branch_taken_0x2f9d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D34u;
            // 0x2f9d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d34) {
            ctx->pc = 0x2F9D80u;
            goto label_2f9d80;
        }
    }
    ctx->pc = 0x2F9D3Cu;
label_2f9d3c:
    // 0x2f9d3c: 0xc0be47a  jal         func_2F91E8
    ctx->pc = 0x2F9D3Cu;
    SET_GPR_U32(ctx, 31, 0x2F9D44u);
    ctx->pc = 0x2F91E8u;
    if (runtime->hasFunction(0x2F91E8u)) {
        auto targetFn = runtime->lookupFunction(0x2F91E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D44u; }
        if (ctx->pc != 0x2F9D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F91E8_0x2f91e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9D44u; }
        if (ctx->pc != 0x2F9D44u) { return; }
    }
    ctx->pc = 0x2F9D44u;
label_2f9d44:
    // 0x2f9d44: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9D44u;
    {
        const bool branch_taken_0x2f9d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D44u;
            // 0x2f9d48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d44) {
            ctx->pc = 0x2F9D80u;
            goto label_2f9d80;
        }
    }
    ctx->pc = 0x2F9D4Cu;
    // 0x2f9d4c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2f9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2f9d50: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2f9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2f9d54: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2f9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2f9d58: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x2f9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
    // 0x2f9d5c: 0x246397b0  addiu       $v1, $v1, -0x6850
    ctx->pc = 0x2f9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940592));
    // 0x2f9d60: 0x248498e8  addiu       $a0, $a0, -0x6718
    ctx->pc = 0x2f9d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940904));
    // 0x2f9d64: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f9d68: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2f9d68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2f9d6c: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2f9d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2f9d70: 0xaca2065c  sw          $v0, 0x65C($a1)
    ctx->pc = 0x2f9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1628), GPR_U32(ctx, 2));
    // 0x2f9d74: 0xacc30660  sw          $v1, 0x660($a2)
    ctx->pc = 0x2f9d74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1632), GPR_U32(ctx, 3));
    // 0x2f9d78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d7c: 0xace40664  sw          $a0, 0x664($a3)
    ctx->pc = 0x2f9d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1636), GPR_U32(ctx, 4));
label_2f9d80:
    // 0x2f9d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9d84: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9D84u;
            // 0x2f9d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9D8Cu;
    // 0x2f9d8c: 0x0  nop
    ctx->pc = 0x2f9d8cu;
    // NOP
    ctx->pc = 0x2f9d90u;
}
