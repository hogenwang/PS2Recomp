#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108488
// Address: 0x108488 - 0x108528
void sub_00108488_0x108488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108488_0x108488");
#endif

    switch (ctx->pc) {
        case 0x1084a4u: goto label_1084a4;
        case 0x108518u: goto label_108518;
        default: break;
    }

    ctx->pc = 0x108488u;

    // 0x108488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10848c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108494: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x108494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10849c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10849Cu;
    SET_GPR_U32(ctx, 31, 0x1084A4u);
    ctx->pc = 0x1084A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10849Cu;
            // 0x1084a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084A4u; }
        if (ctx->pc != 0x1084A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084A4u; }
        if (ctx->pc != 0x1084A4u) { return; }
    }
    ctx->pc = 0x1084A4u;
label_1084a4:
    // 0x1084a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1084a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084a8: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x1084a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x1084ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1084acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1084b0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1084B0u;
    {
        const bool branch_taken_0x1084b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1084B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1084B0u;
            // 0x1084b4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084b0) {
            ctx->pc = 0x1084CCu;
            goto label_1084cc;
        }
    }
    ctx->pc = 0x1084B8u;
    // 0x1084b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1084b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1084bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1084bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1084c0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1084c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1084c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1084C4u;
    {
        const bool branch_taken_0x1084c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1084C4u;
            // 0x1084c8: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084c4) {
            ctx->pc = 0x1084D4u;
            goto label_1084d4;
        }
    }
    ctx->pc = 0x1084CCu;
label_1084cc:
    // 0x1084cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1084ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1084d0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1084d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1084d4:
    // 0x1084d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1084d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1084d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1084d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1084dc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1084dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1084e0: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1084e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x1084e4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1084e4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x1084e8: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x1084e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x1084ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1084ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x1084f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1084f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1084f4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1084f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x1084f8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1084f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1084fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1084fcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x108500: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x108500u;
    {
        const bool branch_taken_0x108500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108500u;
            // 0x108504: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108500) {
            ctx->pc = 0x108518u;
            goto label_108518;
        }
    }
    ctx->pc = 0x108508u;
    // 0x108508: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10850c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10850cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108510: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x108510u;
    ctx->pc = 0x108514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108510u;
            // 0x108514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x108518u;
label_108518:
    // 0x108518: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10851c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10851cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108520: 0x3e00008  jr          $ra
    ctx->pc = 0x108520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108520u;
            // 0x108524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108528u;
    ctx->pc = 0x108528u;
}
