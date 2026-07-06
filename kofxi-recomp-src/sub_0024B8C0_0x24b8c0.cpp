#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024B8C0
// Address: 0x24b8c0 - 0x24b958
void sub_0024B8C0_0x24b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B8C0_0x24b8c0");
#endif

    switch (ctx->pc) {
        case 0x24b8ecu: goto label_24b8ec;
        case 0x24b8fcu: goto label_24b8fc;
        case 0x24b90cu: goto label_24b90c;
        default: break;
    }

    ctx->pc = 0x24b8c0u;

    // 0x24b8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24b8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24b8c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24b8c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b8cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24b8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24b8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8d8: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x24b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x24b8dc: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x24b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x24b8e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8e4: 0xc08c6f0  jal         func_231BC0
    ctx->pc = 0x24B8E4u;
    SET_GPR_U32(ctx, 31, 0x24B8ECu);
    ctx->pc = 0x24B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B8E4u;
            // 0x24b8e8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231BC0u;
    if (runtime->hasFunction(0x231BC0u)) {
        auto targetFn = runtime->lookupFunction(0x231BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B8ECu; }
        if (ctx->pc != 0x24B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231BC0_0x231bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B8ECu; }
        if (ctx->pc != 0x24B8ECu) { return; }
    }
    ctx->pc = 0x24B8ECu;
label_24b8ec:
    // 0x24b8ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x24b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x24b8f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b8f4: 0xc08c6f0  jal         func_231BC0
    ctx->pc = 0x24B8F4u;
    SET_GPR_U32(ctx, 31, 0x24B8FCu);
    ctx->pc = 0x24B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B8F4u;
            // 0x24b8f8: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231BC0u;
    if (runtime->hasFunction(0x231BC0u)) {
        auto targetFn = runtime->lookupFunction(0x231BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B8FCu; }
        if (ctx->pc != 0x24B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231BC0_0x231bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B8FCu; }
        if (ctx->pc != 0x24B8FCu) { return; }
    }
    ctx->pc = 0x24B8FCu;
label_24b8fc:
    // 0x24b8fc: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x24b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x24b900: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24b900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x24b904: 0xc08b614  jal         func_22D850
    ctx->pc = 0x24B904u;
    SET_GPR_U32(ctx, 31, 0x24B90Cu);
    ctx->pc = 0x24B908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24B904u;
            // 0x24b908: 0xa6030022  sh          $v1, 0x22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B90Cu; }
        if (ctx->pc != 0x24B90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24B90Cu; }
        if (ctx->pc != 0x24B90Cu) { return; }
    }
    ctx->pc = 0x24B90Cu;
label_24b90c:
    // 0x24b90c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x24b90cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x24b910: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24b910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24b914: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x24b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x24b918: 0x8cc501c0  lw          $a1, 0x1C0($a2)
    ctx->pc = 0x24b918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x24b91c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x24b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24b920: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24b924: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24b924u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24b928: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24B928u;
    {
        const bool branch_taken_0x24b928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b928) {
            ctx->pc = 0x24B92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24B928u;
            // 0x24b92c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24B930u;
            goto label_24b930;
        }
    }
    ctx->pc = 0x24B930u;
label_24b930:
    // 0x24b930: 0x94c201c0  lhu         $v0, 0x1C0($a2)
    ctx->pc = 0x24b930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x24b934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24b934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b938: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24b938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b93c: 0x2010  mfhi        $a0
    ctx->pc = 0x24b93cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24b940: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24b940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24b944: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x24b944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x24b948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b94c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B94Cu;
            // 0x24b950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24B954u;
    // 0x24b954: 0x0  nop
    ctx->pc = 0x24b954u;
    // NOP
    ctx->pc = 0x24b958u;
}
