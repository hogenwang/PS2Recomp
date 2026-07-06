#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003008E0
// Address: 0x3008e0 - 0x300960
void sub_003008E0_0x3008e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003008E0_0x3008e0");
#endif

    switch (ctx->pc) {
        case 0x3008f8u: goto label_3008f8;
        case 0x300944u: goto label_300944;
        default: break;
    }

    ctx->pc = 0x3008e0u;

    // 0x3008e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3008e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3008e4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3008e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3008e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3008e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3008ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3008ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3008f0: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x3008F0u;
    SET_GPR_U32(ctx, 31, 0x3008F8u);
    ctx->pc = 0x3008F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3008F0u;
            // 0x3008f4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->hasFunction(0x1A4740u)) {
        auto targetFn = runtime->lookupFunction(0x1A4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008F8u; }
        if (ctx->pc != 0x3008F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4740_0x1a4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008F8u; }
        if (ctx->pc != 0x3008F8u) { return; }
    }
    ctx->pc = 0x3008F8u;
label_3008f8:
    // 0x3008f8: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3008F8u;
    {
        const bool branch_taken_0x3008f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3008f8) {
            ctx->pc = 0x3008FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3008F8u;
            // 0x3008fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300914u;
            goto label_300914;
        }
    }
    ctx->pc = 0x300900u;
    // 0x300900: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x300900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x300904: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300908: 0x2463da30  addiu       $v1, $v1, -0x25D0
    ctx->pc = 0x300908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957616));
    // 0x30090c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30090Cu;
    {
        const bool branch_taken_0x30090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30090Cu;
            // 0x300910: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30090c) {
            ctx->pc = 0x300938u;
            goto label_300938;
        }
    }
    ctx->pc = 0x300914u;
label_300914:
    // 0x300914: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300914u;
    {
        const bool branch_taken_0x300914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x300914) {
            ctx->pc = 0x300930u;
            goto label_300930;
        }
    }
    ctx->pc = 0x30091Cu;
    // 0x30091c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x30091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x300920: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300924: 0x2463da50  addiu       $v1, $v1, -0x25B0
    ctx->pc = 0x300924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957648));
    // 0x300928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x300928u;
    {
        const bool branch_taken_0x300928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300928u;
            // 0x30092c: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300928) {
            ctx->pc = 0x300938u;
            goto label_300938;
        }
    }
    ctx->pc = 0x300930u;
label_300930:
    // 0x300930: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300934: 0xac50be80  sw          $s0, -0x4180($v0)
    ctx->pc = 0x300934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 16));
label_300938:
    // 0x300938: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x30093c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x30093Cu;
    SET_GPR_U32(ctx, 31, 0x300944u);
    ctx->pc = 0x300940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30093Cu;
            // 0x300940: 0x2484db40  addiu       $a0, $a0, -0x24C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300944u; }
        if (ctx->pc != 0x300944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300944u; }
        if (ctx->pc != 0x300944u) { return; }
    }
    ctx->pc = 0x300944u;
label_300944:
    // 0x300944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30094c: 0x3e00008  jr          $ra
    ctx->pc = 0x30094Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30094Cu;
            // 0x300950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300954u;
    // 0x300954: 0x0  nop
    ctx->pc = 0x300954u;
    // NOP
    // 0x300958: 0x0  nop
    ctx->pc = 0x300958u;
    // NOP
    // 0x30095c: 0x0  nop
    ctx->pc = 0x30095cu;
    // NOP
    ctx->pc = 0x300960u;
}
