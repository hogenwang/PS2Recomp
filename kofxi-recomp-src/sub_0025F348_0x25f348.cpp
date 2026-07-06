#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025F348
// Address: 0x25f348 - 0x25f558
void sub_0025F348_0x25f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F348_0x25f348");
#endif

    switch (ctx->pc) {
        case 0x25f36cu: goto label_25f36c;
        case 0x25f37cu: goto label_25f37c;
        case 0x25f398u: goto label_25f398;
        case 0x25f3b0u: goto label_25f3b0;
        case 0x25f3d8u: goto label_25f3d8;
        case 0x25f3f8u: goto label_25f3f8;
        case 0x25f40cu: goto label_25f40c;
        case 0x25f41cu: goto label_25f41c;
        case 0x25f480u: goto label_25f480;
        case 0x25f498u: goto label_25f498;
        case 0x25f528u: goto label_25f528;
        case 0x25f534u: goto label_25f534;
        default: break;
    }

    ctx->pc = 0x25f348u;

    // 0x25f348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25f348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25f34c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x25f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x25f350: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25f350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x25f354: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25f354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f35c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F35Cu;
    {
        const bool branch_taken_0x25f35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F35Cu;
            // 0x25f360: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f35c) {
            ctx->pc = 0x25F37Cu;
            goto label_25f37c;
        }
    }
    ctx->pc = 0x25F364u;
    // 0x25f364: 0xc08c84a  jal         func_232128
    ctx->pc = 0x25F364u;
    SET_GPR_U32(ctx, 31, 0x25F36Cu);
    ctx->pc = 0x25F368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F364u;
            // 0x25f368: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232128u;
    if (runtime->hasFunction(0x232128u)) {
        auto targetFn = runtime->lookupFunction(0x232128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F36Cu; }
        if (ctx->pc != 0x25F36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232128_0x232128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F36Cu; }
        if (ctx->pc != 0x25F36Cu) { return; }
    }
    ctx->pc = 0x25F36Cu;
label_25f36c:
    // 0x25f36c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25f36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25f370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f374: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25F374u;
    SET_GPR_U32(ctx, 31, 0x25F37Cu);
    ctx->pc = 0x25F378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F374u;
            // 0x25f378: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F37Cu; }
        if (ctx->pc != 0x25F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F37Cu; }
        if (ctx->pc != 0x25F37Cu) { return; }
    }
    ctx->pc = 0x25F37Cu;
label_25f37c:
    // 0x25f37c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F37Cu;
    {
        const bool branch_taken_0x25f37c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F37Cu;
            // 0x25f380: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f37c) {
            ctx->pc = 0x25F398u;
            goto label_25f398;
        }
    }
    ctx->pc = 0x25F384u;
    // 0x25f384: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x25f384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x25f388: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x25f388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x25f38c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25f390: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25F390u;
    SET_GPR_U32(ctx, 31, 0x25F398u);
    ctx->pc = 0x25F394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F390u;
            // 0x25f394: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F398u; }
        if (ctx->pc != 0x25F398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F398u; }
        if (ctx->pc != 0x25F398u) { return; }
    }
    ctx->pc = 0x25F398u;
label_25f398:
    // 0x25f398: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25f398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f39c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3a0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x25f3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f3a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x25f3a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3A8u;
            // 0x25f3ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F3B0u;
label_25f3b0:
    // 0x25f3b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f3b4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x25f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x25f3b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x25f3bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25f3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3c0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x25f3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x25f3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f3cc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25f3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25f3d0: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25F3D0u;
    SET_GPR_U32(ctx, 31, 0x25F3D8u);
    ctx->pc = 0x25F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3D0u;
            // 0x25f3d4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (runtime->hasFunction(0x25CA38u)) {
        auto targetFn = runtime->lookupFunction(0x25CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3D8u; }
        if (ctx->pc != 0x25F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CA38_0x25ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3D8u; }
        if (ctx->pc != 0x25F3D8u) { return; }
    }
    ctx->pc = 0x25F3D8u;
label_25f3d8:
    // 0x25f3d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25f3d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3dc: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F3DCu;
    {
        const bool branch_taken_0x25f3dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3DCu;
            // 0x25f3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3dc) {
            ctx->pc = 0x25F3ECu;
            goto label_25f3ec;
        }
    }
    ctx->pc = 0x25F3E4u;
    // 0x25f3e4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x25F3E4u;
    {
        const bool branch_taken_0x25f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3E4u;
            // 0x25f3e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3e4) {
            ctx->pc = 0x25F534u;
            goto label_25f534;
        }
    }
    ctx->pc = 0x25F3ECu;
label_25f3ec:
    // 0x25f3ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25f3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3f0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25F3F0u;
    SET_GPR_U32(ctx, 31, 0x25F3F8u);
    ctx->pc = 0x25F3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3F0u;
            // 0x25f3f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3F8u; }
        if (ctx->pc != 0x25F3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F3F8u; }
        if (ctx->pc != 0x25F3F8u) { return; }
    }
    ctx->pc = 0x25F3F8u;
label_25f3f8:
    // 0x25f3f8: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x25f3f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f3fc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x25f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x25f400: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x25f400u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25f404: 0xc04818c  jal         func_120630
    ctx->pc = 0x25F404u;
    SET_GPR_U32(ctx, 31, 0x25F40Cu);
    ctx->pc = 0x25F408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F404u;
            // 0x25f408: 0xffa20020  sd          $v0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F40Cu; }
        if (ctx->pc != 0x25F40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F40Cu; }
        if (ctx->pc != 0x25F40Cu) { return; }
    }
    ctx->pc = 0x25F40Cu;
label_25f40c:
    // 0x25f40c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x25f40cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25f410: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x25f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x25f414: 0xc08c99e  jal         func_232678
    ctx->pc = 0x25F414u;
    SET_GPR_U32(ctx, 31, 0x25F41Cu);
    ctx->pc = 0x25F418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F414u;
            // 0x25f418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232678u;
    if (runtime->hasFunction(0x232678u)) {
        auto targetFn = runtime->lookupFunction(0x232678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F41Cu; }
        if (ctx->pc != 0x25F41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232678_0x232678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F41Cu; }
        if (ctx->pc != 0x25F41Cu) { return; }
    }
    ctx->pc = 0x25F41Cu;
label_25f41c:
    // 0x25f41c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F41Cu;
    {
        const bool branch_taken_0x25f41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F41Cu;
            // 0x25f420: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f41c) {
            ctx->pc = 0x25F42Cu;
            goto label_25f42c;
        }
    }
    ctx->pc = 0x25F424u;
    // 0x25f424: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25F424u;
    {
        const bool branch_taken_0x25f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F424u;
            // 0x25f428: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f424) {
            ctx->pc = 0x25F528u;
            goto label_25f528;
        }
    }
    ctx->pc = 0x25F42Cu;
label_25f42c:
    // 0x25f42c: 0xdfa60020  ld          $a2, 0x20($sp)
    ctx->pc = 0x25f42cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f430: 0x261117c0  addiu       $s1, $s0, 0x17C0
    ctx->pc = 0x25f430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6080));
    // 0x25f434: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x25f434u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25f438: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x25f438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25f43c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x25f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x25f440: 0x3463423f  ori         $v1, $v1, 0x423F
    ctx->pc = 0x25f440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16959);
    // 0x25f444: 0xde0417c0  ld          $a0, 0x17C0($s0)
    ctx->pc = 0x25f444u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 6080)));
    // 0x25f448: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x25f448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x25f44c: 0xc4302d  daddu       $a2, $a2, $a0
    ctx->pc = 0x25f44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 4));
    // 0x25f450: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x25f450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25f454: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x25f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x25f458: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F458u;
    {
        const bool branch_taken_0x25f458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F458u;
            // 0x25f45c: 0xffa50028  sd          $a1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f458) {
            ctx->pc = 0x25F478u;
            goto label_25f478;
        }
    }
    ctx->pc = 0x25F460u;
    // 0x25f460: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x25f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x25f464: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x25f464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
    // 0x25f468: 0x64c30001  daddiu      $v1, $a2, 0x1
    ctx->pc = 0x25f468u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x25f46c: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x25f46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x25f470: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x25f470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x25f474: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x25f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_25f478:
    // 0x25f478: 0xc098012  jal         func_260048
    ctx->pc = 0x25F478u;
    SET_GPR_U32(ctx, 31, 0x25F480u);
    ctx->pc = 0x25F47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F478u;
            // 0x25f47c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260048u;
    if (runtime->hasFunction(0x260048u)) {
        auto targetFn = runtime->lookupFunction(0x260048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F480u; }
        if (ctx->pc != 0x25F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260048_0x260048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F480u; }
        if (ctx->pc != 0x25F480u) { return; }
    }
    ctx->pc = 0x25F480u;
label_25f480:
    // 0x25f480: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25f480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f488: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x25f488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x25f48c: 0x42280b  movn        $a1, $v0, $v0
    ctx->pc = 0x25f48cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x25f490: 0xc08b65c  jal         func_22D970
    ctx->pc = 0x25F490u;
    SET_GPR_U32(ctx, 31, 0x25F498u);
    ctx->pc = 0x25F494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F490u;
            // 0x25f494: 0x2484ae98  addiu       $a0, $a0, -0x5168 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (runtime->hasFunction(0x22D970u)) {
        auto targetFn = runtime->lookupFunction(0x22D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F498u; }
        if (ctx->pc != 0x25F498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D970_0x22d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F498u; }
        if (ctx->pc != 0x25F498u) { return; }
    }
    ctx->pc = 0x25F498u;
label_25f498:
    // 0x25f498: 0x3843000b  xori        $v1, $v0, 0xB
    ctx->pc = 0x25f498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x25f49c: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x25F49Cu;
    {
        const bool branch_taken_0x25f49c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F49Cu;
            // 0x25f4a0: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f49c) {
            ctx->pc = 0x25F528u;
            goto label_25f528;
        }
    }
    ctx->pc = 0x25F4A4u;
    // 0x25f4a4: 0xde0417c0  ld          $a0, 0x17C0($s0)
    ctx->pc = 0x25f4a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 6080)));
    // 0x25f4a8: 0xde250008  ld          $a1, 0x8($s1)
    ctx->pc = 0x25f4a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25f4ac: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x25f4acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f4b0: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x25f4b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25f4b4: 0x44302f  dsubu       $a2, $v0, $a0
    ctx->pc = 0x25f4b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x25f4b8: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x25f4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x25f4bc: 0x65202f  dsubu       $a0, $v1, $a1
    ctx->pc = 0x25f4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
    // 0x25f4c0: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F4C0u;
    {
        const bool branch_taken_0x25f4c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x25F4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F4C0u;
            // 0x25f4c4: 0xffa40038  sd          $a0, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4c0) {
            ctx->pc = 0x25F4E0u;
            goto label_25f4e0;
        }
    }
    ctx->pc = 0x25F4C8u;
    // 0x25f4c8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x25f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x25f4cc: 0x34424240  ori         $v0, $v0, 0x4240
    ctx->pc = 0x25f4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
    // 0x25f4d0: 0x64c3ffff  daddiu      $v1, $a2, -0x1
    ctx->pc = 0x25f4d0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x25f4d4: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x25f4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x25f4d8: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x25f4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x25f4dc: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x25f4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
label_25f4e0:
    // 0x25f4e0: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x25f4e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f4e4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F4E4u;
    {
        const bool branch_taken_0x25f4e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F4E4u;
            // 0x25f4e8: 0xdfa30038  ld          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4e4) {
            ctx->pc = 0x25F4FCu;
            goto label_25f4fc;
        }
    }
    ctx->pc = 0x25F4ECu;
    // 0x25f4ec: 0xffa00038  sd          $zero, 0x38($sp)
    ctx->pc = 0x25f4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 0));
    // 0x25f4f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4f4: 0xffa00030  sd          $zero, 0x30($sp)
    ctx->pc = 0x25f4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 0));
    // 0x25f4f8: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x25f4f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_25f4fc:
    // 0x25f4fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25f4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f500: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x25f500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x25f504: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25f504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25f508: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x25f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x25f50c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x25f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25f510: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x25f510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x25f514: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x25f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x25f518: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x25f518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x25f51c: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x25f51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x25f520: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25F520u;
    SET_GPR_U32(ctx, 31, 0x25F528u);
    ctx->pc = 0x25F524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F520u;
            // 0x25f524: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F528u; }
        if (ctx->pc != 0x25F528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F528u; }
        if (ctx->pc != 0x25F528u) { return; }
    }
    ctx->pc = 0x25F528u;
label_25f528:
    // 0x25f528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25f528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f52c: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25F52Cu;
    SET_GPR_U32(ctx, 31, 0x25F534u);
    ctx->pc = 0x25F530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F52Cu;
            // 0x25f530: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F534u; }
        if (ctx->pc != 0x25F534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F534u; }
        if (ctx->pc != 0x25F534u) { return; }
    }
    ctx->pc = 0x25F534u;
label_25f534:
    // 0x25f534: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25f534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f538: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x25f538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f53c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x25f53cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f540: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25f540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f544: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x25f544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f548: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25f548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f54c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F54Cu;
            // 0x25f550: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F554u;
    // 0x25f554: 0x0  nop
    ctx->pc = 0x25f554u;
    // NOP
    ctx->pc = 0x25f558u;
}
