#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C58A8
// Address: 0x2c58a8 - 0x2c62d0
void sub_002C58A8_0x2c58a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C58A8_0x2c58a8");
#endif

    switch (ctx->pc) {
        case 0x2c5900u: goto label_2c5900;
        case 0x2c591cu: goto label_2c591c;
        case 0x2c5928u: goto label_2c5928;
        case 0x2c5950u: goto label_2c5950;
        case 0x2c5964u: goto label_2c5964;
        case 0x2c5998u: goto label_2c5998;
        case 0x2c59b0u: goto label_2c59b0;
        case 0x2c59b8u: goto label_2c59b8;
        case 0x2c59d4u: goto label_2c59d4;
        case 0x2c59e8u: goto label_2c59e8;
        case 0x2c59f8u: goto label_2c59f8;
        case 0x2c5a08u: goto label_2c5a08;
        case 0x2c5a38u: goto label_2c5a38;
        case 0x2c5a4cu: goto label_2c5a4c;
        case 0x2c5a68u: goto label_2c5a68;
        case 0x2c5a7cu: goto label_2c5a7c;
        case 0x2c5ab4u: goto label_2c5ab4;
        case 0x2c5abcu: goto label_2c5abc;
        case 0x2c5ad0u: goto label_2c5ad0;
        case 0x2c5b00u: goto label_2c5b00;
        case 0x2c5b40u: goto label_2c5b40;
        case 0x2c5b5cu: goto label_2c5b5c;
        case 0x2c5b70u: goto label_2c5b70;
        case 0x2c5b8cu: goto label_2c5b8c;
        case 0x2c5ba0u: goto label_2c5ba0;
        case 0x2c5bd8u: goto label_2c5bd8;
        case 0x2c5be0u: goto label_2c5be0;
        case 0x2c5bf4u: goto label_2c5bf4;
        case 0x2c5c28u: goto label_2c5c28;
        case 0x2c5cb0u: goto label_2c5cb0;
        case 0x2c5cdcu: goto label_2c5cdc;
        case 0x2c5d30u: goto label_2c5d30;
        case 0x2c5d54u: goto label_2c5d54;
        case 0x2c5dacu: goto label_2c5dac;
        case 0x2c5df0u: goto label_2c5df0;
        case 0x2c5e28u: goto label_2c5e28;
        case 0x2c5ea8u: goto label_2c5ea8;
        case 0x2c5ee0u: goto label_2c5ee0;
        case 0x2c5f08u: goto label_2c5f08;
        case 0x2c5f20u: goto label_2c5f20;
        case 0x2c5facu: goto label_2c5fac;
        case 0x2c5fe0u: goto label_2c5fe0;
        case 0x2c6040u: goto label_2c6040;
        case 0x2c6064u: goto label_2c6064;
        case 0x2c60bcu: goto label_2c60bc;
        case 0x2c60d8u: goto label_2c60d8;
        case 0x2c6100u: goto label_2c6100;
        case 0x2c6104u: goto label_2c6104;
        case 0x2c6138u: goto label_2c6138;
        case 0x2c61d4u: goto label_2c61d4;
        case 0x2c6208u: goto label_2c6208;
        case 0x2c6258u: goto label_2c6258;
        case 0x2c6278u: goto label_2c6278;
        case 0x2c62b0u: goto label_2c62b0;
        case 0x2c62b8u: goto label_2c62b8;
        default: break;
    }

    ctx->pc = 0x2c58a8u;

    // 0x2c58a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c58a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c58ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c58acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c58b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c58b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c58b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c58b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c58b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c58bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c58c0: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2c58c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c58c8: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2c58c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c58d0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2c58d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c58d8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2c58d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2c58e0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c58e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58e4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2c58e8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2c58e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c58ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c58f0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C58F0u;
    {
        const bool branch_taken_0x2c58f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C58F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58F0u;
            // 0x2c58f4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58f0) {
            ctx->pc = 0x2C590Cu;
            goto label_2c590c;
        }
    }
    ctx->pc = 0x2C58F8u;
    // 0x2c58f8: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C58F8u;
    SET_GPR_U32(ctx, 31, 0x2C5900u);
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5900u; }
        if (ctx->pc != 0x2C5900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5900u; }
        if (ctx->pc != 0x2C5900u) { return; }
    }
    ctx->pc = 0x2C5900u;
label_2c5900:
    // 0x2c5900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5904: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C5904u;
    {
        const bool branch_taken_0x2c5904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5904) {
            ctx->pc = 0x2C5908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5904u;
            // 0x2c5908: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C596Cu;
            goto label_2c596c;
        }
    }
    ctx->pc = 0x2C590Cu;
label_2c590c:
    // 0x2c590c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2c590cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2c5910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5914: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2C5914u;
    SET_GPR_U32(ctx, 31, 0x2C591Cu);
    ctx->pc = 0x2C5918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5914u;
            // 0x2c5918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C591Cu; }
        if (ctx->pc != 0x2C591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C591Cu; }
        if (ctx->pc != 0x2C591Cu) { return; }
    }
    ctx->pc = 0x2C591Cu;
label_2c591c:
    // 0x2c591c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5920: 0xc0b1b14  jal         func_2C6C50
    ctx->pc = 0x2C5920u;
    SET_GPR_U32(ctx, 31, 0x2C5928u);
    ctx->pc = 0x2C5924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5920u;
            // 0x2c5924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C50u;
    if (runtime->hasFunction(0x2C6C50u)) {
        auto targetFn = runtime->lookupFunction(0x2C6C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5928u; }
        if (ctx->pc != 0x2C5928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6C50_0x2c6c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5928u; }
        if (ctx->pc != 0x2C5928u) { return; }
    }
    ctx->pc = 0x2C5928u;
label_2c5928:
    // 0x2c5928: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c5928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c592c: 0x24427e78  addiu       $v0, $v0, 0x7E78
    ctx->pc = 0x2c592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32376));
    // 0x2c5930: 0xae120064  sw          $s2, 0x64($s0)
    ctx->pc = 0x2c5930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 18));
    // 0x2c5934: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c5934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c5938: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c5938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c593c: 0xae130068  sw          $s3, 0x68($s0)
    ctx->pc = 0x2c593cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 19));
    // 0x2c5940: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2c5940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5944: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2c5944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c5948: 0xc0b1a3a  jal         func_2C68E8
    ctx->pc = 0x2C5948u;
    SET_GPR_U32(ctx, 31, 0x2C5950u);
    ctx->pc = 0x2C594Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5948u;
            // 0x2c594c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C68E8u;
    if (runtime->hasFunction(0x2C68E8u)) {
        auto targetFn = runtime->lookupFunction(0x2C68E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5950u; }
        if (ctx->pc != 0x2C5950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C68E8_0x2c68e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5950u; }
        if (ctx->pc != 0x2C5950u) { return; }
    }
    ctx->pc = 0x2C5950u;
label_2c5950:
    // 0x2c5950: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x2c5950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x2c5954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5958: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c5958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c595c: 0xc0b18b4  jal         func_2C62D0
    ctx->pc = 0x2C595Cu;
    SET_GPR_U32(ctx, 31, 0x2C5964u);
    ctx->pc = 0x2C5960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C595Cu;
            // 0x2c5960: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C62D0u;
    if (runtime->hasFunction(0x2C62D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C62D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5964u; }
        if (ctx->pc != 0x2C5964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C62D0_0x2c62d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5964u; }
        if (ctx->pc != 0x2C5964u) { return; }
    }
    ctx->pc = 0x2C5964u;
label_2c5964:
    // 0x2c5964: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c5968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c596c:
    // 0x2c596c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c596cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c5970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c5970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5974: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c5974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5978: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c5978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c597c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c597cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5980: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c5980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5984: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c5984u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5988: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c5988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c598c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C598Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C598Cu;
            // 0x2c5990: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5994u;
    // 0x2c5994: 0x0  nop
    ctx->pc = 0x2c5994u;
    // NOP
label_2c5998:
    // 0x2c5998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c599c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c59a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c59a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c59a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c59a8: 0xc0b1a5e  jal         func_2C6978
    ctx->pc = 0x2C59A8u;
    SET_GPR_U32(ctx, 31, 0x2C59B0u);
    ctx->pc = 0x2C59ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59A8u;
            // 0x2c59ac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6978u;
    if (runtime->hasFunction(0x2C6978u)) {
        auto targetFn = runtime->lookupFunction(0x2C6978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59B0u; }
        if (ctx->pc != 0x2C59B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6978_0x2c6978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59B0u; }
        if (ctx->pc != 0x2C59B0u) { return; }
    }
    ctx->pc = 0x2C59B0u;
label_2c59b0:
    // 0x2c59b0: 0xc0b18d6  jal         func_2C6358
    ctx->pc = 0x2C59B0u;
    SET_GPR_U32(ctx, 31, 0x2C59B8u);
    ctx->pc = 0x2C59B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59B0u;
            // 0x2c59b4: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6358u;
    if (runtime->hasFunction(0x2C6358u)) {
        auto targetFn = runtime->lookupFunction(0x2C6358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59B8u; }
        if (ctx->pc != 0x2C59B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6358_0x2c6358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59B8u; }
        if (ctx->pc != 0x2C59B8u) { return; }
    }
    ctx->pc = 0x2C59B8u;
label_2c59b8:
    // 0x2c59b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c59b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c59bc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2c59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c59c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C59C0u;
    {
        const bool branch_taken_0x2c59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59C0u;
            // 0x2c59c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59c0) {
            ctx->pc = 0x2C59E8u;
            goto label_2c59e8;
        }
    }
    ctx->pc = 0x2C59C8u;
    // 0x2c59c8: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x2c59c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2c59cc: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2C59CCu;
    SET_GPR_U32(ctx, 31, 0x2C59D4u);
    ctx->pc = 0x2C59D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59CCu;
            // 0x2c59d0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59D4u; }
        if (ctx->pc != 0x2C59D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59D4u; }
        if (ctx->pc != 0x2C59D4u) { return; }
    }
    ctx->pc = 0x2C59D4u;
label_2c59d4:
    // 0x2c59d4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2c59d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c59d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c59d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c59dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c59dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c59e0: 0x80b60dc  j           func_2D8370
    ctx->pc = 0x2C59E0u;
    ctx->pc = 0x2C59E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59E0u;
            // 0x2c59e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D8370_0x2d8370(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C59E8u;
label_2c59e8:
    // 0x2c59e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c59e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c59ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c59ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c59f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C59F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C59F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59F0u;
            // 0x2c59f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C59F8u;
label_2c59f8:
    // 0x2c59f8: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2c59f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2c59fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c59fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A00u;
            // 0x2c5a04: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5A08u;
label_2c5a08:
    // 0x2c5a08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c5a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c5a0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c5a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c5a10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c5a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c5a18: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x2c5a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2c5a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c5a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c5a24: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c5a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c5a28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c5a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c5a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c5a30: 0xc0b18ec  jal         func_2C63B0
    ctx->pc = 0x2C5A30u;
    SET_GPR_U32(ctx, 31, 0x2C5A38u);
    ctx->pc = 0x2C5A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A30u;
            // 0x2c5a34: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C63B0u;
    if (runtime->hasFunction(0x2C63B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C63B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A38u; }
        if (ctx->pc != 0x2C5A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C63B0_0x2c63b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A38u; }
        if (ctx->pc != 0x2C5A38u) { return; }
    }
    ctx->pc = 0x2C5A38u;
label_2c5a38:
    // 0x2c5a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a3c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C5A3Cu;
    {
        const bool branch_taken_0x2c5a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A3Cu;
            // 0x2c5a40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a3c) {
            ctx->pc = 0x2C5AE4u;
            goto label_2c5ae4;
        }
    }
    ctx->pc = 0x2C5A44u;
    // 0x2c5a44: 0xc0b18dc  jal         func_2C6370
    ctx->pc = 0x2C5A44u;
    SET_GPR_U32(ctx, 31, 0x2C5A4Cu);
    ctx->pc = 0x2C6370u;
    if (runtime->hasFunction(0x2C6370u)) {
        auto targetFn = runtime->lookupFunction(0x2C6370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A4Cu; }
        if (ctx->pc != 0x2C5A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6370_0x2c6370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A4Cu; }
        if (ctx->pc != 0x2C5A4Cu) { return; }
    }
    ctx->pc = 0x2C5A4Cu;
label_2c5a4c:
    // 0x2c5a4c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C5A4Cu;
    {
        const bool branch_taken_0x2c5a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A4Cu;
            // 0x2c5a50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a4c) {
            ctx->pc = 0x2C5AE8u;
            goto label_2c5ae8;
        }
    }
    ctx->pc = 0x2C5A54u;
    // 0x2c5a54: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2c5a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c5a58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c5a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a60: 0xc0b1a74  jal         func_2C69D0
    ctx->pc = 0x2C5A60u;
    SET_GPR_U32(ctx, 31, 0x2C5A68u);
    ctx->pc = 0x2C5A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A60u;
            // 0x2c5a64: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C69D0u;
    if (runtime->hasFunction(0x2C69D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C69D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A68u; }
        if (ctx->pc != 0x2C5A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C69D0_0x2c69d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A68u; }
        if (ctx->pc != 0x2C5A68u) { return; }
    }
    ctx->pc = 0x2C5A68u;
label_2c5a68:
    // 0x2c5a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a6c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C5A6Cu;
    {
        const bool branch_taken_0x2c5a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A6Cu;
            // 0x2c5a70: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a6c) {
            ctx->pc = 0x2C5AE4u;
            goto label_2c5ae4;
        }
    }
    ctx->pc = 0x2C5A74u;
    // 0x2c5a74: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C5A74u;
    SET_GPR_U32(ctx, 31, 0x2C5A7Cu);
    ctx->pc = 0x2C6990u;
    if (runtime->hasFunction(0x2C6990u)) {
        auto targetFn = runtime->lookupFunction(0x2C6990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A7Cu; }
        if (ctx->pc != 0x2C5A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6990_0x2c6990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A7Cu; }
        if (ctx->pc != 0x2C5A7Cu) { return; }
    }
    ctx->pc = 0x2C5A7Cu;
label_2c5a7c:
    // 0x2c5a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a80: 0x56000019  bnel        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C5A80u;
    {
        const bool branch_taken_0x2c5a80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a80) {
            ctx->pc = 0x2C5A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A80u;
            // 0x2c5a84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5AE8u;
            goto label_2c5ae8;
        }
    }
    ctx->pc = 0x2C5A88u;
    // 0x2c5a88: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2c5a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5a8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5a90: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C5A90u;
    {
        const bool branch_taken_0x2c5a90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C5A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A90u;
            // 0x2c5a94: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a90) {
            ctx->pc = 0x2C5AE4u;
            goto label_2c5ae4;
        }
    }
    ctx->pc = 0x2C5A98u;
    // 0x2c5a98: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2c5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2c5a9c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5A9Cu;
    {
        const bool branch_taken_0x2c5a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a9c) {
            ctx->pc = 0x2C5AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A9Cu;
            // 0x2c5aa0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5AC4u;
            goto label_2c5ac4;
        }
    }
    ctx->pc = 0x2C5AA4u;
    // 0x2c5aa4: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x2c5aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2c5aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c5aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5aac: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2C5AACu;
    SET_GPR_U32(ctx, 31, 0x2C5AB4u);
    ctx->pc = 0x2C5AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AACu;
            // 0x2c5ab0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AB4u; }
        if (ctx->pc != 0x2C5AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AB4u; }
        if (ctx->pc != 0x2C5AB4u) { return; }
    }
    ctx->pc = 0x2C5AB4u;
label_2c5ab4:
    // 0x2c5ab4: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2C5AB4u;
    SET_GPR_U32(ctx, 31, 0x2C5ABCu);
    ctx->pc = 0x2C5AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AB4u;
            // 0x2c5ab8: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5ABCu; }
        if (ctx->pc != 0x2C5ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5ABCu; }
        if (ctx->pc != 0x2C5ABCu) { return; }
    }
    ctx->pc = 0x2C5ABCu;
label_2c5abc:
    // 0x2c5abc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2c5abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5ac0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2c5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c5ac4:
    // 0x2c5ac4: 0xae250074  sw          $a1, 0x74($s1)
    ctx->pc = 0x2c5ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 5));
    // 0x2c5ac8: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C5AC8u;
    SET_GPR_U32(ctx, 31, 0x2C5AD0u);
    ctx->pc = 0x2C5ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AC8u;
            // 0x2c5acc: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AD0u; }
        if (ctx->pc != 0x2C5AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AD0u; }
        if (ctx->pc != 0x2C5AD0u) { return; }
    }
    ctx->pc = 0x2C5AD0u;
label_2c5ad0:
    // 0x2c5ad0: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2c5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x2c5ad4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ad8: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2c5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2c5adc: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2c5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x2c5ae0: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2c5ae0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_2c5ae4:
    // 0x2c5ae4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c5ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5ae8:
    // 0x2c5ae8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c5ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5aec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c5aecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5af0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c5af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5af4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c5af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5af8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AF8u;
            // 0x2c5afc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5B00u;
label_2c5b00:
    // 0x2c5b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c5b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c5b04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c5b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c5b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c5b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c5b10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c5b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c5b18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c5b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c5b1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c5b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c5b20: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2c5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2c5b24: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2c5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2c5b28: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2c5b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c5b2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5B2Cu;
    {
        const bool branch_taken_0x2c5b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B2Cu;
            // 0x2c5b30: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b2c) {
            ctx->pc = 0x2C5B50u;
            goto label_2c5b50;
        }
    }
    ctx->pc = 0x2C5B34u;
    // 0x2c5b34: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x2c5b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2c5b38: 0xc0b18ec  jal         func_2C63B0
    ctx->pc = 0x2C5B38u;
    SET_GPR_U32(ctx, 31, 0x2C5B40u);
    ctx->pc = 0x2C5B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B38u;
            // 0x2c5b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C63B0u;
    if (runtime->hasFunction(0x2C63B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C63B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B40u; }
        if (ctx->pc != 0x2C5B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C63B0_0x2c63b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B40u; }
        if (ctx->pc != 0x2C5B40u) { return; }
    }
    ctx->pc = 0x2C5B40u;
label_2c5b40:
    // 0x2c5b40: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5B40u;
    {
        const bool branch_taken_0x2c5b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5b40) {
            ctx->pc = 0x2C5B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B40u;
            // 0x2c5b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5B68u;
            goto label_2c5b68;
        }
    }
    ctx->pc = 0x2C5B48u;
    // 0x2c5b48: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2C5B48u;
    {
        const bool branch_taken_0x2c5b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B48u;
            // 0x2c5b4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b48) {
            ctx->pc = 0x2C5C0Cu;
            goto label_2c5c0c;
        }
    }
    ctx->pc = 0x2C5B50u;
label_2c5b50:
    // 0x2c5b50: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x2c5b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2c5b54: 0xc0b18f8  jal         func_2C63E0
    ctx->pc = 0x2C5B54u;
    SET_GPR_U32(ctx, 31, 0x2C5B5Cu);
    ctx->pc = 0x2C5B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B54u;
            // 0x2c5b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C63E0u;
    if (runtime->hasFunction(0x2C63E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C63E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B5Cu; }
        if (ctx->pc != 0x2C5B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C63E0_0x2c63e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B5Cu; }
        if (ctx->pc != 0x2C5B5Cu) { return; }
    }
    ctx->pc = 0x2C5B5Cu;
label_2c5b5c:
    // 0x2c5b5c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C5B5Cu;
    {
        const bool branch_taken_0x2c5b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5b5c) {
            ctx->pc = 0x2C5B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B5Cu;
            // 0x2c5b60: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5C0Cu;
            goto label_2c5c0c;
        }
    }
    ctx->pc = 0x2C5B64u;
    // 0x2c5b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5b68:
    // 0x2c5b68: 0xc0b18dc  jal         func_2C6370
    ctx->pc = 0x2C5B68u;
    SET_GPR_U32(ctx, 31, 0x2C5B70u);
    ctx->pc = 0x2C5B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B68u;
            // 0x2c5b6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6370u;
    if (runtime->hasFunction(0x2C6370u)) {
        auto targetFn = runtime->lookupFunction(0x2C6370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B70u; }
        if (ctx->pc != 0x2C5B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6370_0x2c6370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B70u; }
        if (ctx->pc != 0x2C5B70u) { return; }
    }
    ctx->pc = 0x2C5B70u;
label_2c5b70:
    // 0x2c5b70: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C5B70u;
    {
        const bool branch_taken_0x2c5b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B70u;
            // 0x2c5b74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b70) {
            ctx->pc = 0x2C5C0Cu;
            goto label_2c5c0c;
        }
    }
    ctx->pc = 0x2C5B78u;
    // 0x2c5b78: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2c5b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c5b7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c5b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c5b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b84: 0xc0b1a80  jal         func_2C6A00
    ctx->pc = 0x2C5B84u;
    SET_GPR_U32(ctx, 31, 0x2C5B8Cu);
    ctx->pc = 0x2C5B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B84u;
            // 0x2c5b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A00u;
    if (runtime->hasFunction(0x2C6A00u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B8Cu; }
        if (ctx->pc != 0x2C5B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A00_0x2c6a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B8Cu; }
        if (ctx->pc != 0x2C5B8Cu) { return; }
    }
    ctx->pc = 0x2C5B8Cu;
label_2c5b8c:
    // 0x2c5b8c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C5B8Cu;
    {
        const bool branch_taken_0x2c5b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5b8c) {
            ctx->pc = 0x2C5B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B8Cu;
            // 0x2c5b90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5C0Cu;
            goto label_2c5c0c;
        }
    }
    ctx->pc = 0x2C5B94u;
    // 0x2c5b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b98: 0xc0b1a64  jal         func_2C6990
    ctx->pc = 0x2C5B98u;
    SET_GPR_U32(ctx, 31, 0x2C5BA0u);
    ctx->pc = 0x2C5B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B98u;
            // 0x2c5b9c: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6990u;
    if (runtime->hasFunction(0x2C6990u)) {
        auto targetFn = runtime->lookupFunction(0x2C6990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BA0u; }
        if (ctx->pc != 0x2C5BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6990_0x2c6990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BA0u; }
        if (ctx->pc != 0x2C5BA0u) { return; }
    }
    ctx->pc = 0x2C5BA0u;
label_2c5ba0:
    // 0x2c5ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ba4: 0x56000019  bnel        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C5BA4u;
    {
        const bool branch_taken_0x2c5ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ba4) {
            ctx->pc = 0x2C5BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BA4u;
            // 0x2c5ba8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5C0Cu;
            goto label_2c5c0c;
        }
    }
    ctx->pc = 0x2C5BACu;
    // 0x2c5bac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2c5bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5bb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5bb4: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C5BB4u;
    {
        const bool branch_taken_0x2c5bb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C5BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BB4u;
            // 0x2c5bb8: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bb4) {
            ctx->pc = 0x2C5C08u;
            goto label_2c5c08;
        }
    }
    ctx->pc = 0x2C5BBCu;
    // 0x2c5bbc: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2c5bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2c5bc0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5BC0u;
    {
        const bool branch_taken_0x2c5bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5bc0) {
            ctx->pc = 0x2C5BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BC0u;
            // 0x2c5bc4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5BE8u;
            goto label_2c5be8;
        }
    }
    ctx->pc = 0x2C5BC8u;
    // 0x2c5bc8: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x2c5bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2c5bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c5bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5bd0: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2C5BD0u;
    SET_GPR_U32(ctx, 31, 0x2C5BD8u);
    ctx->pc = 0x2C5BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BD0u;
            // 0x2c5bd4: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BD8u; }
        if (ctx->pc != 0x2C5BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BD8u; }
        if (ctx->pc != 0x2C5BD8u) { return; }
    }
    ctx->pc = 0x2C5BD8u;
label_2c5bd8:
    // 0x2c5bd8: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2C5BD8u;
    SET_GPR_U32(ctx, 31, 0x2C5BE0u);
    ctx->pc = 0x2C5BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BD8u;
            // 0x2c5bdc: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BE0u; }
        if (ctx->pc != 0x2C5BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BE0u; }
        if (ctx->pc != 0x2C5BE0u) { return; }
    }
    ctx->pc = 0x2C5BE0u;
label_2c5be0:
    // 0x2c5be0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2c5be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5be4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2c5be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c5be8:
    // 0x2c5be8: 0xae250074  sw          $a1, 0x74($s1)
    ctx->pc = 0x2c5be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 5));
    // 0x2c5bec: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C5BECu;
    SET_GPR_U32(ctx, 31, 0x2C5BF4u);
    ctx->pc = 0x2C5BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BECu;
            // 0x2c5bf0: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BF4u; }
        if (ctx->pc != 0x2C5BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BF4u; }
        if (ctx->pc != 0x2C5BF4u) { return; }
    }
    ctx->pc = 0x2C5BF4u;
label_2c5bf4:
    // 0x2c5bf4: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2c5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x2c5bf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5bf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5bfc: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2c5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2c5c00: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2c5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x2c5c04: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2c5c04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_2c5c08:
    // 0x2c5c08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c5c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5c0c:
    // 0x2c5c0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c5c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5c10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c5c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5c14: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c5c14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5c18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c5c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C1Cu;
            // 0x2c5c20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5C24u;
    // 0x2c5c24: 0x0  nop
    ctx->pc = 0x2c5c24u;
    // NOP
label_2c5c28:
    // 0x2c5c28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c5c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c5c2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5c30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c5c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c5c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c38: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2c5c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2c5c3c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2c5c3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c40: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2c5c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2c5c44: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2c5c44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c5c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c5c4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c5c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c5c50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c5c54: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2c5c58: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2c5c5c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c5c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2c5c60: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2c5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2c5c64: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2c5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2c5c68: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2c5c68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2c5c6c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2c5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c5c70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c5c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c5c74: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x2c5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x2c5c78: 0x8e12006c  lw          $s2, 0x6C($s0)
    ctx->pc = 0x2c5c78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c5c7c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5C7Cu;
    {
        const bool branch_taken_0x2c5c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C5C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C7Cu;
            // 0x2c5c80: 0x8e110074  lw          $s1, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c7c) {
            ctx->pc = 0x2C5CB8u;
            goto label_2c5cb8;
        }
    }
    ctx->pc = 0x2C5C84u;
    // 0x2c5c84: 0xfe182b  sltu        $v1, $a3, $fp
    ctx->pc = 0x2c5c84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2c5c88: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2C5C88u;
    {
        const bool branch_taken_0x2c5c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C88u;
            // 0x2c5c8c: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c88) {
            ctx->pc = 0x2C5DF8u;
            goto label_2c5df8;
        }
    }
    ctx->pc = 0x2C5C90u;
    // 0x2c5c90: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c5c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c94: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c5c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c5c98: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c5c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c5c9c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2c5c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ca0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2c5ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5ca4: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2c5ca4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ca8: 0xc0b1a8c  jal         func_2C6A30
    ctx->pc = 0x2C5CA8u;
    SET_GPR_U32(ctx, 31, 0x2C5CB0u);
    ctx->pc = 0x2C5CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CA8u;
            // 0x2c5cac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A30u;
    if (runtime->hasFunction(0x2C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CB0u; }
        if (ctx->pc != 0x2C5CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A30_0x2c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CB0u; }
        if (ctx->pc != 0x2C5CB0u) { return; }
    }
    ctx->pc = 0x2C5CB0u;
label_2c5cb0:
    // 0x2c5cb0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2C5CB0u;
    {
        const bool branch_taken_0x2c5cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CB0u;
            // 0x2c5cb4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5cb0) {
            ctx->pc = 0x2C5DFCu;
            goto label_2c5dfc;
        }
    }
    ctx->pc = 0x2C5CB8u;
label_2c5cb8:
    // 0x2c5cb8: 0x25eb021  addu        $s6, $s2, $fp
    ctx->pc = 0x2c5cb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x2c5cbc: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x2c5cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c5cc0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5CC0u;
    {
        const bool branch_taken_0x2c5cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cc0) {
            ctx->pc = 0x2C5CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CC0u;
            // 0x2c5cc4: 0x2d1001b  divu        $zero, $s6, $s1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,22); } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5CF0u;
            goto label_2c5cf0;
        }
    }
    ctx->pc = 0x2C5CC8u;
    // 0x2c5cc8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2c5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c5ccc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c5cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cd0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2c5cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cd4: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2C5CD4u;
    SET_GPR_U32(ctx, 31, 0x2C5CDCu);
    ctx->pc = 0x2C5CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CD4u;
            // 0x2c5cd8: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CDCu; }
        if (ctx->pc != 0x2C5CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CDCu; }
        if (ctx->pc != 0x2C5CDCu) { return; }
    }
    ctx->pc = 0x2C5CDCu;
label_2c5cdc:
    // 0x2c5cdc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2c5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c5ce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ce4: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2c5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2c5ce8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2C5CE8u;
    {
        const bool branch_taken_0x2c5ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CE8u;
            // 0x2c5cec: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ce8) {
            ctx->pc = 0x2C5DF8u;
            goto label_2c5df8;
        }
    }
    ctx->pc = 0x2C5CF0u;
label_2c5cf0:
    // 0x2c5cf0: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C5CF0u;
    {
        const bool branch_taken_0x2c5cf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cf0) {
            ctx->pc = 0x2C5CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CF0u;
            // 0x2c5cf4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5CF8u;
            goto label_2c5cf8;
        }
    }
    ctx->pc = 0x2C5CF8u;
label_2c5cf8:
    // 0x2c5cf8: 0x2012  mflo        $a0
    ctx->pc = 0x2c5cf8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2c5cfc: 0x91a818  mult        $s5, $a0, $s1
    ctx->pc = 0x2c5cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x2c5d00: 0xf5182b  sltu        $v1, $a3, $s5
    ctx->pc = 0x2c5d00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2c5d04: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C5D04u;
    {
        const bool branch_taken_0x2c5d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D04u;
            // 0x2c5d08: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d04) {
            ctx->pc = 0x2C5DF8u;
            goto label_2c5df8;
        }
    }
    ctx->pc = 0x2C5D0Cu;
    // 0x2c5d0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c5d0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c5d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c5d14: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C5D14u;
    {
        const bool branch_taken_0x2c5d14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D14u;
            // 0x2c5d18: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d14) {
            ctx->pc = 0x2C5D78u;
            goto label_2c5d78;
        }
    }
    ctx->pc = 0x2C5D1Cu;
    // 0x2c5d1c: 0x8e130070  lw          $s3, 0x70($s0)
    ctx->pc = 0x2c5d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c5d20: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c5d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d24: 0x2323023  subu        $a2, $s1, $s2
    ctx->pc = 0x2c5d24u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2c5d28: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2C5D28u;
    SET_GPR_U32(ctx, 31, 0x2C5D30u);
    ctx->pc = 0x2C5D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D28u;
            // 0x2c5d2c: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D30u; }
        if (ctx->pc != 0x2C5D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D30u; }
        if (ctx->pc != 0x2C5D30u) { return; }
    }
    ctx->pc = 0x2C5D30u;
label_2c5d30:
    // 0x2c5d30: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2c5d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c5d34: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c5d38: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c5d38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d3c: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c5d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c5d40: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c5d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d44: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x2c5d44u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c5d48: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2c5d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d4c: 0xc0b1a8c  jal         func_2C6A30
    ctx->pc = 0x2C5D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C5D54u);
    ctx->pc = 0x2C5D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D4Cu;
            // 0x2c5d50: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A30u;
    if (runtime->hasFunction(0x2C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D54u; }
        if (ctx->pc != 0x2C5D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A30_0x2c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D54u; }
        if (ctx->pc != 0x2C5D54u) { return; }
    }
    ctx->pc = 0x2C5D54u;
label_2c5d54:
    // 0x2c5d54: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C5D54u;
    {
        const bool branch_taken_0x2c5d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d54) {
            ctx->pc = 0x2C5D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D54u;
            // 0x2c5d58: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DFCu;
            goto label_2c5dfc;
        }
    }
    ctx->pc = 0x2C5D5Cu;
    // 0x2c5d5c: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x2c5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x2c5d60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c5d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5d64: 0x529823  subu        $s3, $v0, $s2
    ctx->pc = 0x2c5d64u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c5d68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5d6c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2c5d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2c5d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5D70u;
    {
        const bool branch_taken_0x2c5d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D70u;
            // 0x2c5d74: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d70) {
            ctx->pc = 0x2C5D7Cu;
            goto label_2c5d7c;
        }
    }
    ctx->pc = 0x2C5D78u;
label_2c5d78:
    // 0x2c5d78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c5d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d7c:
    // 0x2c5d7c: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x2c5d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2c5d80: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C5D80u;
    {
        const bool branch_taken_0x2c5d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d80) {
            ctx->pc = 0x2C5D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D80u;
            // 0x2c5d84: 0x2b6102b  sltu        $v0, $s5, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DD0u;
            goto label_2c5dd0;
        }
    }
    ctx->pc = 0x2C5D88u;
    // 0x2c5d88: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c5d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c5d8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c5d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d90: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c5d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c5d94: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c5d94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d98: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x2c5d98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c5d9c: 0x2a35023  subu        $t2, $s5, $v1
    ctx->pc = 0x2c5d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2c5da0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2c5da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c5da4: 0xc0b1a8c  jal         func_2C6A30
    ctx->pc = 0x2C5DA4u;
    SET_GPR_U32(ctx, 31, 0x2C5DACu);
    ctx->pc = 0x2C5DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DA4u;
            // 0x2c5da8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A30u;
    if (runtime->hasFunction(0x2C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DACu; }
        if (ctx->pc != 0x2C5DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A30_0x2c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DACu; }
        if (ctx->pc != 0x2C5DACu) { return; }
    }
    ctx->pc = 0x2C5DACu;
label_2c5dac:
    // 0x2c5dac: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C5DACu;
    {
        const bool branch_taken_0x2c5dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5dac) {
            ctx->pc = 0x2C5DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DACu;
            // 0x2c5db0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DFCu;
            goto label_2c5dfc;
        }
    }
    ctx->pc = 0x2C5DB4u;
    // 0x2c5db4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2c5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5db8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5dbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5dc4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2c5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5dc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c5dcc: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x2c5dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_2c5dd0:
    // 0x2c5dd0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5DD0u;
    {
        const bool branch_taken_0x2c5dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5dd0) {
            ctx->pc = 0x2C5DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DD0u;
            // 0x2c5dd4: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DF4u;
            goto label_2c5df4;
        }
    }
    ctx->pc = 0x2C5DD8u;
    // 0x2c5dd8: 0x2d59023  subu        $s2, $s6, $s5
    ctx->pc = 0x2c5dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x2c5ddc: 0x2fe2821  addu        $a1, $s7, $fp
    ctx->pc = 0x2c5ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x2c5de0: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2c5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c5de4: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x2c5de4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2c5de8: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2C5DE8u;
    SET_GPR_U32(ctx, 31, 0x2C5DF0u);
    ctx->pc = 0x2C5DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DE8u;
            // 0x2c5dec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DF0u; }
        if (ctx->pc != 0x2C5DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DF0u; }
        if (ctx->pc != 0x2C5DF0u) { return; }
    }
    ctx->pc = 0x2C5DF0u;
label_2c5df0:
    // 0x2c5df0: 0xae12006c  sw          $s2, 0x6C($s0)
    ctx->pc = 0x2c5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 18));
label_2c5df4:
    // 0x2c5df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5df8:
    // 0x2c5df8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c5df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5dfc:
    // 0x2c5dfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c5dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5e00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c5e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5e04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c5e04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5e08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c5e08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5e0c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c5e0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5e10: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c5e10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5e14: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2c5e14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c5e18: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2c5e18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5e1c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2c5e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5e20: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E20u;
            // 0x2c5e24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5E28u;
label_2c5e28:
    // 0x2c5e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c5e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c5e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c5e3c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x2c5e3cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5e44: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2c5e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e48: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2c5e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c5e4c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C5E4Cu;
    {
        const bool branch_taken_0x2c5e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E4Cu;
            // 0x2c5e50: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e4c) {
            ctx->pc = 0x2C5E80u;
            goto label_2c5e80;
        }
    }
    ctx->pc = 0x2C5E54u;
    // 0x2c5e54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5E54u;
    {
        const bool branch_taken_0x2c5e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5e54) {
            ctx->pc = 0x2C5E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E54u;
            // 0x2c5e58: 0x8e03006c  lw          $v1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5E70u;
            goto label_2c5e70;
        }
    }
    ctx->pc = 0x2C5E5Cu;
    // 0x2c5e5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5e60: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C5E60u;
    {
        const bool branch_taken_0x2c5e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E60u;
            // 0x2c5e64: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e60) {
            ctx->pc = 0x2C5EF0u;
            goto label_2c5ef0;
        }
    }
    ctx->pc = 0x2C5E68u;
    // 0x2c5e68: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C5E68u;
    {
        const bool branch_taken_0x2c5e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E68u;
            // 0x2c5e6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e68) {
            ctx->pc = 0x2C5F0Cu;
            goto label_2c5f0c;
        }
    }
    ctx->pc = 0x2C5E70u;
label_2c5e70:
    // 0x2c5e70: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C5E70u;
    {
        const bool branch_taken_0x2c5e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E70u;
            // 0x2c5e74: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e70) {
            ctx->pc = 0x2C5F08u;
            goto label_2c5f08;
        }
    }
    ctx->pc = 0x2C5E78u;
    // 0x2c5e78: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C5E78u;
    {
        const bool branch_taken_0x2c5e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E78u;
            // 0x2c5e7c: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e78) {
            ctx->pc = 0x2C5EF4u;
            goto label_2c5ef4;
        }
    }
    ctx->pc = 0x2C5E80u;
label_2c5e80:
    // 0x2c5e80: 0x8e0a0074  lw          $t2, 0x74($s0)
    ctx->pc = 0x2c5e80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2c5e84: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x2c5e84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c5e88: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C5E88u;
    {
        const bool branch_taken_0x2c5e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E88u;
            // 0x2c5e8c: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e88) {
            ctx->pc = 0x2C5F08u;
            goto label_2c5f08;
        }
    }
    ctx->pc = 0x2C5E90u;
    // 0x2c5e90: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2c5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c5e94: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c5e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e98: 0x8a102b  sltu        $v0, $a0, $t2
    ctx->pc = 0x2c5e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c5e9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5E9Cu;
    {
        const bool branch_taken_0x2c5e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E9Cu;
            // 0x2c5ea0: 0x1431823  subu        $v1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e9c) {
            ctx->pc = 0x2C5EC4u;
            goto label_2c5ec4;
        }
    }
    ctx->pc = 0x2C5EA4u;
    // 0x2c5ea4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2c5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2c5ea8:
    // 0x2c5ea8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5eac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c5eb0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c5eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5eb4: 0x8e0a0074  lw          $t2, 0x74($s0)
    ctx->pc = 0x2c5eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2c5eb8: 0x8a102b  sltu        $v0, $a0, $t2
    ctx->pc = 0x2c5eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c5ebc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C5EBCu;
    {
        const bool branch_taken_0x2c5ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ebc) {
            ctx->pc = 0x2C5EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EBCu;
            // 0x2c5ec0: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c5ea8;
        }
    }
    ctx->pc = 0x2C5EC4u;
label_2c5ec4:
    // 0x2c5ec4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2c5ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c5ec8: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c5ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c5ecc: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c5eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c5ed0: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2c5ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ed4: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x2c5ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c5ed8: 0xc0b1a8c  jal         func_2C6A30
    ctx->pc = 0x2C5ED8u;
    SET_GPR_U32(ctx, 31, 0x2C5EE0u);
    ctx->pc = 0x2C5EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5ED8u;
            // 0x2c5edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A30u;
    if (runtime->hasFunction(0x2C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EE0u; }
        if (ctx->pc != 0x2C5EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A30_0x2c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EE0u; }
        if (ctx->pc != 0x2C5EE0u) { return; }
    }
    ctx->pc = 0x2C5EE0u;
label_2c5ee0:
    // 0x2c5ee0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C5EE0u;
    {
        const bool branch_taken_0x2c5ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ee0) {
            ctx->pc = 0x2C5EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EE0u;
            // 0x2c5ee4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F0Cu;
            goto label_2c5f0c;
        }
    }
    ctx->pc = 0x2C5EE8u;
    // 0x2c5ee8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5EE8u;
    {
        const bool branch_taken_0x2c5ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EE8u;
            // 0x2c5eec: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ee8) {
            ctx->pc = 0x2C5EF8u;
            goto label_2c5ef8;
        }
    }
    ctx->pc = 0x2C5EF0u;
label_2c5ef0:
    // 0x2c5ef0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2c5ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_2c5ef4:
    // 0x2c5ef4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2c5ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2c5ef8:
    // 0x2c5ef8: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c5ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c5efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f00: 0xc0b1aa0  jal         func_2C6A80
    ctx->pc = 0x2C5F00u;
    SET_GPR_U32(ctx, 31, 0x2C5F08u);
    ctx->pc = 0x2C5F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F00u;
            // 0x2c5f04: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A80u;
    if (runtime->hasFunction(0x2C6A80u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F08u; }
        if (ctx->pc != 0x2C5F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A80_0x2c6a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F08u; }
        if (ctx->pc != 0x2C5F08u) { return; }
    }
    ctx->pc = 0x2C5F08u;
label_2c5f08:
    // 0x2c5f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c5f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5f0c:
    // 0x2c5f0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c5f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c5f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5f14: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F14u;
            // 0x2c5f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5F1Cu;
    // 0x2c5f1c: 0x0  nop
    ctx->pc = 0x2c5f1cu;
    // NOP
label_2c5f20:
    // 0x2c5f20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c5f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c5f24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5f28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c5f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c5f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f30: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c5f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2c5f34: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2c5f34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f38: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2c5f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2c5f3c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2c5f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2c5f40: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2c5f40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c5f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c5f48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c5f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c5f4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c5f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c5f50: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c5f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2c5f54: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c5f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2c5f58: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2c5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2c5f5c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2c5f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2c5f60: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2c5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2c5f64: 0x8e12006c  lw          $s2, 0x6C($s0)
    ctx->pc = 0x2c5f64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c5f68: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2c5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c5f6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c5f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c5f70: 0x25eb821  addu        $s7, $s2, $fp
    ctx->pc = 0x2c5f70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x2c5f74: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x2c5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x2c5f78: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C5F78u;
    {
        const bool branch_taken_0x2c5f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F78u;
            // 0x2c5f7c: 0x8e110074  lw          $s1, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f78) {
            ctx->pc = 0x2C5FB8u;
            goto label_2c5fb8;
        }
    }
    ctx->pc = 0x2C5F80u;
    // 0x2c5f80: 0xfe182b  sltu        $v1, $a3, $fp
    ctx->pc = 0x2c5f80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2c5f84: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2C5F84u;
    {
        const bool branch_taken_0x2c5f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F84u;
            // 0x2c5f88: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f84) {
            ctx->pc = 0x2C6108u;
            goto label_2c6108;
        }
    }
    ctx->pc = 0x2C5F8Cu;
    // 0x2c5f8c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c5f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f90: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c5f94: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c5f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c5f98: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2c5f98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f9c: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2c5f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c5fa0: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2c5fa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fa4: 0xc0b1a8c  jal         func_2C6A30
    ctx->pc = 0x2C5FA4u;
    SET_GPR_U32(ctx, 31, 0x2C5FACu);
    ctx->pc = 0x2C5FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FA4u;
            // 0x2c5fa8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A30u;
    if (runtime->hasFunction(0x2C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FACu; }
        if (ctx->pc != 0x2C5FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A30_0x2c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FACu; }
        if (ctx->pc != 0x2C5FACu) { return; }
    }
    ctx->pc = 0x2C5FACu;
label_2c5fac:
    // 0x2c5fac: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2C5FACu;
    {
        const bool branch_taken_0x2c5fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FACu;
            // 0x2c5fb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fac) {
            ctx->pc = 0x2C610Cu;
            goto label_2c610c;
        }
    }
    ctx->pc = 0x2C5FB4u;
    // 0x2c5fb4: 0x0  nop
    ctx->pc = 0x2c5fb4u;
    // NOP
label_2c5fb8:
    // 0x2c5fb8: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x2c5fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c5fbc: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2c5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c5fc0: 0x57102b  sltu        $v0, $v0, $s7
    ctx->pc = 0x2c5fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2c5fc4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C5FC4u;
    {
        const bool branch_taken_0x2c5fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5fc4) {
            ctx->pc = 0x2C5FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FC4u;
            // 0x2c5fc8: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5FF8u;
            goto label_2c5ff8;
        }
    }
    ctx->pc = 0x2C5FCCu;
    // 0x2c5fcc: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2c5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c5fd0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c5fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fd4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2c5fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fd8: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2C5FD8u;
    SET_GPR_U32(ctx, 31, 0x2C5FE0u);
    ctx->pc = 0x2C5FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FD8u;
            // 0x2c5fdc: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FE0u; }
        if (ctx->pc != 0x2C5FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5FE0u; }
        if (ctx->pc != 0x2C5FE0u) { return; }
    }
    ctx->pc = 0x2C5FE0u;
label_2c5fe0:
    // 0x2c5fe0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2c5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c5fe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fe8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2c5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2c5fec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2C5FECu;
    {
        const bool branch_taken_0x2c5fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FECu;
            // 0x2c5ff0: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fec) {
            ctx->pc = 0x2C6108u;
            goto label_2c6108;
        }
    }
    ctx->pc = 0x2C5FF4u;
    // 0x2c5ff4: 0x0  nop
    ctx->pc = 0x2c5ff4u;
    // NOP
label_2c5ff8:
    // 0x2c5ff8: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C5FF8u;
    {
        const bool branch_taken_0x2c5ff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ff8) {
            ctx->pc = 0x2C5FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5FF8u;
            // 0x2c5ffc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6000u;
            goto label_2c6000;
        }
    }
    ctx->pc = 0x2C6000u;
label_2c6000:
    // 0x2c6000: 0x2e2a023  subu        $s4, $s7, $v0
    ctx->pc = 0x2c6000u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2c6004: 0x291001b  divu        $zero, $s4, $s1
    ctx->pc = 0x2c6004u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
    // 0x2c6008: 0x1812  mflo        $v1
    ctx->pc = 0x2c6008u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2c600c: 0x71a018  mult        $s4, $v1, $s1
    ctx->pc = 0x2c600cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2c6010: 0xf4202b  sltu        $a0, $a3, $s4
    ctx->pc = 0x2c6010u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c6014: 0x1480003c  bnez        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C6014u;
    {
        const bool branch_taken_0x2c6014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6014u;
            // 0x2c6018: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6014) {
            ctx->pc = 0x2C6108u;
            goto label_2c6108;
        }
    }
    ctx->pc = 0x2C601Cu;
    // 0x2c601c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2c601cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6020: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c6020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c6024: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C6024u;
    {
        const bool branch_taken_0x2c6024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6024u;
            // 0x2c6028: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6024) {
            ctx->pc = 0x2C6088u;
            goto label_2c6088;
        }
    }
    ctx->pc = 0x2C602Cu;
    // 0x2c602c: 0x8e130070  lw          $s3, 0x70($s0)
    ctx->pc = 0x2c602cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c6030: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c6030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6034: 0x2323023  subu        $a2, $s1, $s2
    ctx->pc = 0x2c6034u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2c6038: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2C6038u;
    SET_GPR_U32(ctx, 31, 0x2C6040u);
    ctx->pc = 0x2C603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6038u;
            // 0x2c603c: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6040u; }
        if (ctx->pc != 0x2C6040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6040u; }
        if (ctx->pc != 0x2C6040u) { return; }
    }
    ctx->pc = 0x2C6040u;
label_2c6040:
    // 0x2c6040: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2c6040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c6044: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c6044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c6048: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c6048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c604c: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c604cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c6050: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2c6050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6054: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x2c6054u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c6058: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2c6058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c605c: 0xc0b1a8c  jal         func_2C6A30
    ctx->pc = 0x2C605Cu;
    SET_GPR_U32(ctx, 31, 0x2C6064u);
    ctx->pc = 0x2C6060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C605Cu;
            // 0x2c6060: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A30u;
    if (runtime->hasFunction(0x2C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6064u; }
        if (ctx->pc != 0x2C6064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A30_0x2c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6064u; }
        if (ctx->pc != 0x2C6064u) { return; }
    }
    ctx->pc = 0x2C6064u;
label_2c6064:
    // 0x2c6064: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C6064u;
    {
        const bool branch_taken_0x2c6064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6064) {
            ctx->pc = 0x2C6068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6064u;
            // 0x2c6068: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C610Cu;
            goto label_2c610c;
        }
    }
    ctx->pc = 0x2C606Cu;
    // 0x2c606c: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x2c606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2c6070: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c6070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6074: 0x529823  subu        $s3, $v0, $s2
    ctx->pc = 0x2c6074u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c6078: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c607c: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x2c607cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2c6080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6080u;
    {
        const bool branch_taken_0x2c6080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6080u;
            // 0x2c6084: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6080) {
            ctx->pc = 0x2C608Cu;
            goto label_2c608c;
        }
    }
    ctx->pc = 0x2C6088u;
label_2c6088:
    // 0x2c6088: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c6088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c608c:
    // 0x2c608c: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x2c608cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2c6090: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C6090u;
    {
        const bool branch_taken_0x2c6090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6090) {
            ctx->pc = 0x2C6094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6090u;
            // 0x2c6094: 0x297102b  sltu        $v0, $s4, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C60E0u;
            goto label_2c60e0;
        }
    }
    ctx->pc = 0x2C6098u;
    // 0x2c6098: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c6098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c609c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2c609cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c60a0: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c60a4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c60a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c60a8: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x2c60a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c60ac: 0x2835023  subu        $t2, $s4, $v1
    ctx->pc = 0x2c60acu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2c60b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2c60b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c60b4: 0xc0b1a8c  jal         func_2C6A30
    ctx->pc = 0x2C60B4u;
    SET_GPR_U32(ctx, 31, 0x2C60BCu);
    ctx->pc = 0x2C60B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60B4u;
            // 0x2c60b8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A30u;
    if (runtime->hasFunction(0x2C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60BCu; }
        if (ctx->pc != 0x2C60BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A30_0x2c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C60BCu; }
        if (ctx->pc != 0x2C60BCu) { return; }
    }
    ctx->pc = 0x2C60BCu;
label_2c60bc:
    // 0x2c60bc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C60BCu;
    {
        const bool branch_taken_0x2c60bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c60bc) {
            ctx->pc = 0x2C60C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60BCu;
            // 0x2c60c0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C610Cu;
            goto label_2c610c;
        }
    }
    ctx->pc = 0x2C60C4u;
    // 0x2c60c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2c60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c60c8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2c60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c60cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c60d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c60d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c60d8:
    // 0x2c60d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c60d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c60dc: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x2c60dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_2c60e0:
    // 0x2c60e0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C60E0u;
    {
        const bool branch_taken_0x2c60e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c60e0) {
            ctx->pc = 0x2C60E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60E0u;
            // 0x2c60e4: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6104u;
            goto label_2c6104;
        }
    }
    ctx->pc = 0x2C60E8u;
    // 0x2c60e8: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x2c60e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x2c60ec: 0x2de2821  addu        $a1, $s6, $fp
    ctx->pc = 0x2c60ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x2c60f0: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2c60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c60f4: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x2c60f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2c60f8: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2C60F8u;
    SET_GPR_U32(ctx, 31, 0x2C6100u);
    ctx->pc = 0x2C60FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C60F8u;
            // 0x2c60fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6100u; }
        if (ctx->pc != 0x2C6100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6100u; }
        if (ctx->pc != 0x2C6100u) { return; }
    }
    ctx->pc = 0x2C6100u;
label_2c6100:
    // 0x2c6100: 0xae12006c  sw          $s2, 0x6C($s0)
    ctx->pc = 0x2c6100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 18));
label_2c6104:
    // 0x2c6104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6108:
    // 0x2c6108: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c6108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c610c:
    // 0x2c610c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c610cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c6110: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c6110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6114: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c6114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6118: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c6118u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c611c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c611cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c6120: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c6120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6124: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2c6124u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6128: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2c6128u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c612c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2c612cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c6130: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6130u;
            // 0x2c6134: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6138u;
label_2c6138:
    // 0x2c6138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c613c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6148: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c6148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c614c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c614cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6150: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c6150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c6154: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c6154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c615c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6160: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2c6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c6164: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6164u;
    {
        const bool branch_taken_0x2c6164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C6168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6164u;
            // 0x2c6168: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6164) {
            ctx->pc = 0x2C6198u;
            goto label_2c6198;
        }
    }
    ctx->pc = 0x2C616Cu;
    // 0x2c616c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C616Cu;
    {
        const bool branch_taken_0x2c616c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c616c) {
            ctx->pc = 0x2C6170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C616Cu;
            // 0x2c6170: 0x8e03006c  lw          $v1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6188u;
            goto label_2c6188;
        }
    }
    ctx->pc = 0x2C6174u;
    // 0x2c6174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6178: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C6178u;
    {
        const bool branch_taken_0x2c6178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6178u;
            // 0x2c617c: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6178) {
            ctx->pc = 0x2C6240u;
            goto label_2c6240;
        }
    }
    ctx->pc = 0x2C6180u;
    // 0x2c6180: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2C6180u;
    {
        const bool branch_taken_0x2c6180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6180u;
            // 0x2c6184: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6180) {
            ctx->pc = 0x2C625Cu;
            goto label_2c625c;
        }
    }
    ctx->pc = 0x2C6188u;
label_2c6188:
    // 0x2c6188: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C6188u;
    {
        const bool branch_taken_0x2c6188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6188u;
            // 0x2c618c: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6188) {
            ctx->pc = 0x2C6258u;
            goto label_2c6258;
        }
    }
    ctx->pc = 0x2C6190u;
    // 0x2c6190: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C6190u;
    {
        const bool branch_taken_0x2c6190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6190u;
            // 0x2c6194: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6190) {
            ctx->pc = 0x2C6244u;
            goto label_2c6244;
        }
    }
    ctx->pc = 0x2C6198u;
label_2c6198:
    // 0x2c6198: 0x8e0a006c  lw          $t2, 0x6C($s0)
    ctx->pc = 0x2c6198u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c619c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x2c619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2c61a0: 0x1543002d  bne         $t2, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C61A0u;
    {
        const bool branch_taken_0x2c61a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C61A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61A0u;
            // 0x2c61a4: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61a0) {
            ctx->pc = 0x2C6258u;
            goto label_2c6258;
        }
    }
    ctx->pc = 0x2C61A8u;
    // 0x2c61a8: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x2c61a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c61ac: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C61ACu;
    {
        const bool branch_taken_0x2c61ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C61B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61ACu;
            // 0x2c61b0: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61ac) {
            ctx->pc = 0x2C6258u;
            goto label_2c6258;
        }
    }
    ctx->pc = 0x2C61B4u;
    // 0x2c61b4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2c61b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c61b8: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x2c61b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c61bc: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c61bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c61c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c61c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61c4: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x2c61c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c61c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c61c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61cc: 0xc0b1a8c  jal         func_2C6A30
    ctx->pc = 0x2C61CCu;
    SET_GPR_U32(ctx, 31, 0x2C61D4u);
    ctx->pc = 0x2C61D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61CCu;
            // 0x2c61d0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A30u;
    if (runtime->hasFunction(0x2C6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C61D4u; }
        if (ctx->pc != 0x2C61D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A30_0x2c6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C61D4u; }
        if (ctx->pc != 0x2C61D4u) { return; }
    }
    ctx->pc = 0x2C61D4u;
label_2c61d4:
    // 0x2c61d4: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C61D4u;
    {
        const bool branch_taken_0x2c61d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c61d4) {
            ctx->pc = 0x2C61D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61D4u;
            // 0x2c61d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C625Cu;
            goto label_2c625c;
        }
    }
    ctx->pc = 0x2C61DCu;
    // 0x2c61dc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2c61dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c61e0: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x2c61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2c61e4: 0x9045ffff  lbu         $a1, -0x1($v0)
    ctx->pc = 0x2c61e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2c61e8: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C61E8u;
    {
        const bool branch_taken_0x2c61e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61E8u;
            // 0x2c61ec: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61e8) {
            ctx->pc = 0x2C6258u;
            goto label_2c6258;
        }
    }
    ctx->pc = 0x2C61F0u;
    // 0x2c61f0: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x2c61f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2c61f4: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x2c61f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c61f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C61F8u;
    {
        const bool branch_taken_0x2c61f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C61F8u;
            // 0x2c61fc: 0xc52023  subu        $a0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61f8) {
            ctx->pc = 0x2C6218u;
            goto label_2c6218;
        }
    }
    ctx->pc = 0x2C6200u;
    // 0x2c6200: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C6200u;
    {
        const bool branch_taken_0x2c6200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6200u;
            // 0x2c6204: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6200) {
            ctx->pc = 0x2C6258u;
            goto label_2c6258;
        }
    }
    ctx->pc = 0x2C6208u;
label_2c6208:
    // 0x2c6208: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c6208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c620c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2c620cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6210: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6210u;
    {
        const bool branch_taken_0x2c6210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C6214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6210u;
            // 0x2c6214: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6210) {
            ctx->pc = 0x2C6258u;
            goto label_2c6258;
        }
    }
    ctx->pc = 0x2C6218u;
label_2c6218:
    // 0x2c6218: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x2c6218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c621c: 0x0  nop
    ctx->pc = 0x2c621cu;
    // NOP
    // 0x2c6220: 0x0  nop
    ctx->pc = 0x2c6220u;
    // NOP
    // 0x2c6224: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C6224u;
    {
        const bool branch_taken_0x2c6224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6224u;
            // 0x2c6228: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6224) {
            ctx->pc = 0x2C6208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c6208;
        }
    }
    ctx->pc = 0x2C622Cu;
    // 0x2c622c: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2c622cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2c6230: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c6230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c6234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6234u;
    {
        const bool branch_taken_0x2c6234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6234u;
            // 0x2c6238: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6234) {
            ctx->pc = 0x2C6248u;
            goto label_2c6248;
        }
    }
    ctx->pc = 0x2C623Cu;
    // 0x2c623c: 0x0  nop
    ctx->pc = 0x2c623cu;
    // NOP
label_2c6240:
    // 0x2c6240: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2c6240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2c6244:
    // 0x2c6244: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2c6244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2c6248:
    // 0x2c6248: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2c6248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2c624c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6250: 0xc0b1aa0  jal         func_2C6A80
    ctx->pc = 0x2C6250u;
    SET_GPR_U32(ctx, 31, 0x2C6258u);
    ctx->pc = 0x2C6254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6250u;
            // 0x2c6254: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A80u;
    if (runtime->hasFunction(0x2C6A80u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6258u; }
        if (ctx->pc != 0x2C6258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A80_0x2c6a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6258u; }
        if (ctx->pc != 0x2C6258u) { return; }
    }
    ctx->pc = 0x2C6258u;
label_2c6258:
    // 0x2c6258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c625c:
    // 0x2c625c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c625cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c6260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6264: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c6264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c6268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c626c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C626Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C626Cu;
            // 0x2c6270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6274u;
    // 0x2c6274: 0x0  nop
    ctx->pc = 0x2c6274u;
    // NOP
label_2c6278:
    // 0x2c6278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c627c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2c627cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c6288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c628c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c628cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6290: 0x2402020d  addiu       $v0, $zero, 0x20D
    ctx->pc = 0x2c6290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    // 0x2c6294: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x2c6294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c6298: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2c6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c629c: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C629Cu;
    {
        const bool branch_taken_0x2c629c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C62A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C629Cu;
            // 0x2c62a0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c629c) {
            ctx->pc = 0x2C62BCu;
            goto label_2c62bc;
        }
    }
    ctx->pc = 0x2C62A4u;
    // 0x2c62a4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c62a8: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2C62A8u;
    SET_GPR_U32(ctx, 31, 0x2C62B0u);
    ctx->pc = 0x2C62ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62A8u;
            // 0x2c62ac: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62B0u; }
        if (ctx->pc != 0x2C62B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62B0u; }
        if (ctx->pc != 0x2C62B0u) { return; }
    }
    ctx->pc = 0x2C62B0u;
label_2c62b0:
    // 0x2c62b0: 0xc0b1a9c  jal         func_2C6A70
    ctx->pc = 0x2C62B0u;
    SET_GPR_U32(ctx, 31, 0x2C62B8u);
    ctx->pc = 0x2C62B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62B0u;
            // 0x2c62b4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A70u;
    if (runtime->hasFunction(0x2C6A70u)) {
        auto targetFn = runtime->lookupFunction(0x2C6A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62B8u; }
        if (ctx->pc != 0x2C62B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6A70_0x2c6a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62B8u; }
        if (ctx->pc != 0x2C62B8u) { return; }
    }
    ctx->pc = 0x2C62B8u;
label_2c62b8:
    // 0x2c62b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c62b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c62bc:
    // 0x2c62bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c62bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c62c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c62c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c62c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C62C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C62C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C62C4u;
            // 0x2c62c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C62CCu;
    // 0x2c62cc: 0x0  nop
    ctx->pc = 0x2c62ccu;
    // NOP
    ctx->pc = 0x2c62d0u;
}
