#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5768
// Address: 0x2c5768 - 0x2c5820
void sub_002C5768_0x2c5768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5768_0x2c5768");
#endif

    switch (ctx->pc) {
        case 0x2c577cu: goto label_2c577c;
        case 0x2c57a8u: goto label_2c57a8;
        case 0x2c57c4u: goto label_2c57c4;
        case 0x2c57d4u: goto label_2c57d4;
        case 0x2c57e4u: goto label_2c57e4;
        case 0x2c5800u: goto label_2c5800;
        default: break;
    }

    ctx->pc = 0x2c5768u;

    // 0x2c5768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c5768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c576c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c5770: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c5770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c5774: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C5774u;
    SET_GPR_U32(ctx, 31, 0x2C577Cu);
    ctx->pc = 0x2C5778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5774u;
            // 0x2c5778: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C577Cu; }
        if (ctx->pc != 0x2C577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C577Cu; }
        if (ctx->pc != 0x2C577Cu) { return; }
    }
    ctx->pc = 0x2C577Cu;
label_2c577c:
    // 0x2c577c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c577cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5780: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5780u;
    {
        const bool branch_taken_0x2c5780 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5780) {
            ctx->pc = 0x2C5784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5780u;
            // 0x2c5784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C57B0u;
            goto label_2c57b0;
        }
    }
    ctx->pc = 0x2C5788u;
    // 0x2c5788: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x2c5788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2c578c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c5790: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c5790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c5794: 0x240500d5  addiu       $a1, $zero, 0xD5
    ctx->pc = 0x2c5794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x2c5798: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c5798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c579c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c579cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57a0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C57A0u;
    SET_GPR_U32(ctx, 31, 0x2C57A8u);
    ctx->pc = 0x2C57A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57A0u;
            // 0x2c57a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57A8u; }
        if (ctx->pc != 0x2C57A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57A8u; }
        if (ctx->pc != 0x2C57A8u) { return; }
    }
    ctx->pc = 0x2C57A8u;
label_2c57a8:
    // 0x2c57a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C57A8u;
    {
        const bool branch_taken_0x2c57a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57A8u;
            // 0x2c57ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57a8) {
            ctx->pc = 0x2C57F0u;
            goto label_2c57f0;
        }
    }
    ctx->pc = 0x2C57B0u;
label_2c57b0:
    // 0x2c57b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2c57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c57b4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c57b8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2c57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c57bc: 0xc0b0c2a  jal         func_2C30A8
    ctx->pc = 0x2C57BCu;
    SET_GPR_U32(ctx, 31, 0x2C57C4u);
    ctx->pc = 0x2C57C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57BCu;
            // 0x2c57c0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C30A8u;
    if (runtime->hasFunction(0x2C30A8u)) {
        auto targetFn = runtime->lookupFunction(0x2C30A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57C4u; }
        if (ctx->pc != 0x2C57C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C30A8_0x2c30a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57C4u; }
        if (ctx->pc != 0x2C57C4u) { return; }
    }
    ctx->pc = 0x2C57C4u;
label_2c57c4:
    // 0x2c57c4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C57C4u;
    {
        const bool branch_taken_0x2c57c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57C4u;
            // 0x2c57c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57c4) {
            ctx->pc = 0x2C57A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c57a8;
        }
    }
    ctx->pc = 0x2C57CCu;
    // 0x2c57cc: 0xc0b09ee  jal         func_2C27B8
    ctx->pc = 0x2C57CCu;
    SET_GPR_U32(ctx, 31, 0x2C57D4u);
    ctx->pc = 0x2C27B8u;
    if (runtime->hasFunction(0x2C27B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C27B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57D4u; }
        if (ctx->pc != 0x2C57D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C27B8_0x2c27b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57D4u; }
        if (ctx->pc != 0x2C57D4u) { return; }
    }
    ctx->pc = 0x2C57D4u;
label_2c57d4:
    // 0x2c57d4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C57D4u;
    {
        const bool branch_taken_0x2c57d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57D4u;
            // 0x2c57d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57d4) {
            ctx->pc = 0x2C57A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c57a8;
        }
    }
    ctx->pc = 0x2C57DCu;
    // 0x2c57dc: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C57DCu;
    SET_GPR_U32(ctx, 31, 0x2C57E4u);
    ctx->pc = 0x2C57E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57DCu;
            // 0x2c57e0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57E4u; }
        if (ctx->pc != 0x2C57E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57E4u; }
        if (ctx->pc != 0x2C57E4u) { return; }
    }
    ctx->pc = 0x2C57E4u;
label_2c57e4:
    // 0x2c57e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c57e8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2c57e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2c57ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c57ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c57f0:
    // 0x2c57f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c57f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c57f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c57f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c57f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C57F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C57FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57F8u;
            // 0x2c57fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5800u;
label_2c5800:
    // 0x2c5800: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2c5800u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2c5804: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2c5804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2c5808: 0x24e7ede0  addiu       $a3, $a3, -0x1220
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962656));
    // 0x2c580c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5810: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c5810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5814: 0x80a8b46  j           func_2A2D18
    ctx->pc = 0x2C5814u;
    ctx->pc = 0x2C5818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5814u;
            // 0x2c5818: 0x24080061  addiu       $t0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (runtime->hasFunction(0x2A2D18u)) {
        auto targetFn = runtime->lookupFunction(0x2A2D18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A2D18_0x2a2d18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C581Cu;
    // 0x2c581c: 0x0  nop
    ctx->pc = 0x2c581cu;
    // NOP
    ctx->pc = 0x2c5820u;
}
