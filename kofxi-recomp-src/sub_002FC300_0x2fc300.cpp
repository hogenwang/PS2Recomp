#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC300
// Address: 0x2fc300 - 0x2fc3f0
void sub_002FC300_0x2fc300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC300_0x2fc300");
#endif

    switch (ctx->pc) {
        case 0x2fc338u: goto label_2fc338;
        case 0x2fc348u: goto label_2fc348;
        case 0x2fc350u: goto label_2fc350;
        case 0x2fc368u: goto label_2fc368;
        case 0x2fc370u: goto label_2fc370;
        case 0x2fc37cu: goto label_2fc37c;
        case 0x2fc390u: goto label_2fc390;
        case 0x2fc398u: goto label_2fc398;
        case 0x2fc3b8u: goto label_2fc3b8;
        default: break;
    }

    ctx->pc = 0x2fc300u;

    // 0x2fc300: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x2fc300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x2fc304: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2fc304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2fc308: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x2fc308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
    // 0x2fc30c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc310: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2fc310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc314: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x2fc314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
    // 0x2fc318: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x2fc318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
    // 0x2fc31c: 0xffbf02f0  sd          $ra, 0x2F0($sp)
    ctx->pc = 0x2fc31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 31));
    // 0x2fc320: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fc320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc324: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x2fc324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
    // 0x2fc328: 0xffb502d0  sd          $s5, 0x2D0($sp)
    ctx->pc = 0x2fc328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 21));
    // 0x2fc32c: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x2fc32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
    // 0x2fc330: 0xc0b024e  jal         func_2C0938
    ctx->pc = 0x2FC330u;
    SET_GPR_U32(ctx, 31, 0x2FC338u);
    ctx->pc = 0x2FC334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC330u;
            // 0x2fc334: 0xffb00280  sd          $s0, 0x280($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0938u;
    if (runtime->hasFunction(0x2C0938u)) {
        auto targetFn = runtime->lookupFunction(0x2C0938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC338u; }
        if (ctx->pc != 0x2FC338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0938_0x2c0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC338u; }
        if (ctx->pc != 0x2FC338u) { return; }
    }
    ctx->pc = 0x2FC338u;
label_2fc338:
    // 0x2fc338: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fc338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fc33c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc340: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC340u;
    SET_GPR_U32(ctx, 31, 0x2FC348u);
    ctx->pc = 0x2FC344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC340u;
            // 0x2fc344: 0x24843018  addiu       $a0, $a0, 0x3018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC348u; }
        if (ctx->pc != 0x2FC348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC348u; }
        if (ctx->pc != 0x2FC348u) { return; }
    }
    ctx->pc = 0x2FC348u;
label_2fc348:
    // 0x2fc348: 0xc0b075a  jal         func_2C1D68
    ctx->pc = 0x2FC348u;
    SET_GPR_U32(ctx, 31, 0x2FC350u);
    ctx->pc = 0x2FC34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC348u;
            // 0x2fc34c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1D68u;
    if (runtime->hasFunction(0x2C1D68u)) {
        auto targetFn = runtime->lookupFunction(0x2C1D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC350u; }
        if (ctx->pc != 0x2FC350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1D68_0x2c1d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC350u; }
        if (ctx->pc != 0x2FC350u) { return; }
    }
    ctx->pc = 0x2FC350u;
label_2fc350:
    // 0x2fc350: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2fc350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc354: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FC354u;
    {
        const bool branch_taken_0x2fc354 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2FC358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC354u;
            // 0x2fc358: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc354) {
            ctx->pc = 0x2FC3C4u;
            goto label_2fc3c4;
        }
    }
    ctx->pc = 0x2FC35Cu;
    // 0x2fc35c: 0x27b20200  addiu       $s2, $sp, 0x200
    ctx->pc = 0x2fc35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2fc360: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x2fc360u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x2fc364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fc364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fc368:
    // 0x2fc368: 0xc0b07a0  jal         func_2C1E80
    ctx->pc = 0x2FC368u;
    SET_GPR_U32(ctx, 31, 0x2FC370u);
    ctx->pc = 0x2FC36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC368u;
            // 0x2fc36c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1E80u;
    if (runtime->hasFunction(0x2C1E80u)) {
        auto targetFn = runtime->lookupFunction(0x2C1E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC370u; }
        if (ctx->pc != 0x2FC370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1E80_0x2c1e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC370u; }
        if (ctx->pc != 0x2FC370u) { return; }
    }
    ctx->pc = 0x2FC370u;
label_2fc370:
    // 0x2fc370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fc370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc374: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC374u;
    SET_GPR_U32(ctx, 31, 0x2FC37Cu);
    ctx->pc = 0x2FC378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC374u;
            // 0x2fc378: 0x26c43028  addiu       $a0, $s6, 0x3028 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC37Cu; }
        if (ctx->pc != 0x2FC37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC37Cu; }
        if (ctx->pc != 0x2FC37Cu) { return; }
    }
    ctx->pc = 0x2FC37Cu;
label_2fc37c:
    // 0x2fc37c: 0xa3a00200  sb          $zero, 0x200($sp)
    ctx->pc = 0x2fc37cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 512), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc384: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fc384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc388: 0xc0afdba  jal         func_2BF6E8
    ctx->pc = 0x2FC388u;
    SET_GPR_U32(ctx, 31, 0x2FC390u);
    ctx->pc = 0x2FC38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC388u;
            // 0x2fc38c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF6E8u;
    if (runtime->hasFunction(0x2BF6E8u)) {
        auto targetFn = runtime->lookupFunction(0x2BF6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC390u; }
        if (ctx->pc != 0x2FC390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF6E8_0x2bf6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC390u; }
        if (ctx->pc != 0x2FC390u) { return; }
    }
    ctx->pc = 0x2FC390u;
label_2fc390:
    // 0x2fc390: 0xc0afdb6  jal         func_2BF6D8
    ctx->pc = 0x2FC390u;
    SET_GPR_U32(ctx, 31, 0x2FC398u);
    ctx->pc = 0x2FC394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC390u;
            // 0x2fc394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF6D8u;
    if (runtime->hasFunction(0x2BF6D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BF6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC398u; }
        if (ctx->pc != 0x2FC398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF6D8_0x2bf6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC398u; }
        if (ctx->pc != 0x2FC398u) { return; }
    }
    ctx->pc = 0x2FC398u;
label_2fc398:
    // 0x2fc398: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC398u;
    {
        const bool branch_taken_0x2fc398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC398u;
            // 0x2fc39c: 0x26a43030  addiu       $a0, $s5, 0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc398) {
            ctx->pc = 0x2FC3A8u;
            goto label_2fc3a8;
        }
    }
    ctx->pc = 0x2FC3A0u;
    // 0x2fc3a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fc3a4: 0x24423038  addiu       $v0, $v0, 0x3038
    ctx->pc = 0x2fc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12344));
label_2fc3a8:
    // 0x2fc3a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fc3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc3ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fc3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc3b0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC3B0u;
    SET_GPR_U32(ctx, 31, 0x2FC3B8u);
    ctx->pc = 0x2FC3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3B0u;
            // 0x2fc3b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC3B8u; }
        if (ctx->pc != 0x2FC3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC3B8u; }
        if (ctx->pc != 0x2FC3B8u) { return; }
    }
    ctx->pc = 0x2FC3B8u;
label_2fc3b8:
    // 0x2fc3b8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2fc3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2fc3bc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2FC3BCu;
    {
        const bool branch_taken_0x2fc3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3BCu;
            // 0x2fc3c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3bc) {
            ctx->pc = 0x2FC368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fc368;
        }
    }
    ctx->pc = 0x2FC3C4u;
label_2fc3c4:
    // 0x2fc3c4: 0xdfbf02f0  ld          $ra, 0x2F0($sp)
    ctx->pc = 0x2fc3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2fc3c8: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x2fc3c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2fc3cc: 0xdfb502d0  ld          $s5, 0x2D0($sp)
    ctx->pc = 0x2fc3ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2fc3d0: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x2fc3d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2fc3d4: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x2fc3d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2fc3d8: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x2fc3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2fc3dc: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x2fc3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2fc3e0: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x2fc3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2fc3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3E4u;
            // 0x2fc3e8: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC3ECu;
    // 0x2fc3ec: 0x0  nop
    ctx->pc = 0x2fc3ecu;
    // NOP
    ctx->pc = 0x2fc3f0u;
}
