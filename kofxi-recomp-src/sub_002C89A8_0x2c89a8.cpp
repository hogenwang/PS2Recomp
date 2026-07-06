#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C89A8
// Address: 0x2c89a8 - 0x2c8a28
void sub_002C89A8_0x2c89a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C89A8_0x2c89a8");
#endif

    switch (ctx->pc) {
        case 0x2c89b0u: goto label_2c89b0;
        case 0x2c89c4u: goto label_2c89c4;
        case 0x2c89e0u: goto label_2c89e0;
        case 0x2c89fcu: goto label_2c89fc;
        case 0x2c8a08u: goto label_2c8a08;
        default: break;
    }

    ctx->pc = 0x2c89a8u;

    // 0x2c89a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c89a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c89ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c89acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c89b0:
    // 0x2c89b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c89b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c89b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c89b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c89b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c89bc: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C89BCu;
    SET_GPR_U32(ctx, 31, 0x2C89C4u);
    ctx->pc = 0x2C89C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C89BCu;
            // 0x2c89c0: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89C4u; }
        if (ctx->pc != 0x2C89C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89C4u; }
        if (ctx->pc != 0x2C89C4u) { return; }
    }
    ctx->pc = 0x2C89C4u;
label_2c89c4:
    // 0x2c89c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c89c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89c8: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2c89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2c89cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c89ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89d0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C89D0u;
    {
        const bool branch_taken_0x2c89d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C89D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C89D0u;
            // 0x2c89d4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89d0) {
            ctx->pc = 0x2C89F4u;
            goto label_2c89f4;
        }
    }
    ctx->pc = 0x2C89D8u;
    // 0x2c89d8: 0xc0b3c66  jal         func_2CF198
    ctx->pc = 0x2C89D8u;
    SET_GPR_U32(ctx, 31, 0x2C89E0u);
    ctx->pc = 0x2CF198u;
    if (runtime->hasFunction(0x2CF198u)) {
        auto targetFn = runtime->lookupFunction(0x2CF198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89E0u; }
        if (ctx->pc != 0x2C89E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF198_0x2cf198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89E0u; }
        if (ctx->pc != 0x2C89E0u) { return; }
    }
    ctx->pc = 0x2C89E0u;
label_2c89e0:
    // 0x2c89e0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2c89e4: 0x24638368  addiu       $v1, $v1, -0x7C98
    ctx->pc = 0x2c89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935400));
    // 0x2c89e8: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x2c89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
    // 0x2c89ec: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2c89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2c89f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c89f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c89f4:
    // 0x2c89f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c89f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c89f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c89f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c89fc:
    // 0x2c89fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c89fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8A00u;
            // 0x2c8a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8A08u;
label_2c8a08:
    // 0x2c8a08: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2c8a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2c8a0c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c8a10: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2c8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2c8a14: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c8a18: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2c8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2c8a1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8a20: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8A20u;
            // 0x2c8a24: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8A28u;
    ctx->pc = 0x2c8a28u;
}
