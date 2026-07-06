#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D58C8
// Address: 0x2d58c8 - 0x2d5980
void sub_002D58C8_0x2d58c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D58C8_0x2d58c8");
#endif

    switch (ctx->pc) {
        case 0x2d5904u: goto label_2d5904;
        case 0x2d5914u: goto label_2d5914;
        case 0x2d5958u: goto label_2d5958;
        default: break;
    }

    ctx->pc = 0x2d58c8u;

    // 0x2d58c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d58c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d58cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d58d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d58d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d58d8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2d58d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d58e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d58e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d58e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d58e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d58ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d58f0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d58f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d58f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d58f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d58f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d58fc: 0xc0b22ec  jal         func_2C8BB0
    ctx->pc = 0x2D58FCu;
    SET_GPR_U32(ctx, 31, 0x2D5904u);
    ctx->pc = 0x2D5900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D58FCu;
            // 0x2d5900: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (runtime->hasFunction(0x2C8BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5904u; }
        if (ctx->pc != 0x2D5904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8BB0_0x2c8bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5904u; }
        if (ctx->pc != 0x2D5904u) { return; }
    }
    ctx->pc = 0x2D5904u;
label_2d5904:
    // 0x2d5904: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D5904u;
    {
        const bool branch_taken_0x2d5904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5904u;
            // 0x2d5908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5904) {
            ctx->pc = 0x2D5958u;
            goto label_2d5958;
        }
    }
    ctx->pc = 0x2D590Cu;
    // 0x2d590c: 0xc0b22fa  jal         func_2C8BE8
    ctx->pc = 0x2D590Cu;
    SET_GPR_U32(ctx, 31, 0x2D5914u);
    ctx->pc = 0x2C8BE8u;
    if (runtime->hasFunction(0x2C8BE8u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5914u; }
        if (ctx->pc != 0x2D5914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8BE8_0x2c8be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5914u; }
        if (ctx->pc != 0x2D5914u) { return; }
    }
    ctx->pc = 0x2D5914u;
label_2d5914:
    // 0x2d5914: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D5914u;
    {
        const bool branch_taken_0x2d5914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5914) {
            ctx->pc = 0x2D5918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5914u;
            // 0x2d5918: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D595Cu;
            goto label_2d595c;
        }
    }
    ctx->pc = 0x2D591Cu;
    // 0x2d591c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5924: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5928: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d592c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d592cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5930: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5934: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d5934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5938: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d593c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d593cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5944: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2d5944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5948: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d5948u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d594c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d594cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5950: 0x80b1bfc  j           func_2C6FF0
    ctx->pc = 0x2D5950u;
    ctx->pc = 0x2D5954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5950u;
            // 0x2d5954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6FF0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C6FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D5958u;
label_2d5958:
    // 0x2d5958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d595c:
    // 0x2d595c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d595cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5964: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5968: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5968u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d596c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d596cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5970: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d5970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5974: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5974u;
            // 0x2d5978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D597Cu;
    // 0x2d597c: 0x0  nop
    ctx->pc = 0x2d597cu;
    // NOP
    ctx->pc = 0x2d5980u;
}
