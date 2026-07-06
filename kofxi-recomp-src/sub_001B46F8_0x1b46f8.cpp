#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B46F8
// Address: 0x1b46f8 - 0x1b47d0
void sub_001B46F8_0x1b46f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B46F8_0x1b46f8");
#endif

    switch (ctx->pc) {
        case 0x1b4710u: goto label_1b4710;
        case 0x1b4720u: goto label_1b4720;
        case 0x1b473cu: goto label_1b473c;
        case 0x1b4750u: goto label_1b4750;
        case 0x1b47bcu: goto label_1b47bc;
        case 0x1b47c4u: goto label_1b47c4;
        default: break;
    }

    ctx->pc = 0x1b46f8u;

    // 0x1b46f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b46fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4700: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x1b4700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1b4704: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4704u;
            // 0x1b4708: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B470Cu;
    // 0x1b470c: 0x0  nop
    ctx->pc = 0x1b470cu;
    // NOP
label_1b4710:
    // 0x1b4710: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b4710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b4714: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4714u;
            // 0x1b4718: 0x8c62a930  lw          $v0, -0x56D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945072)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B471Cu;
    // 0x1b471c: 0x0  nop
    ctx->pc = 0x1b471cu;
    // NOP
label_1b4720:
    // 0x1b4720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4724: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b4724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b4728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b472c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b472cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b4730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b4734: 0xc07172a  jal         func_1C5CA8
    ctx->pc = 0x1B4734u;
    SET_GPR_U32(ctx, 31, 0x1B473Cu);
    ctx->pc = 0x1B4738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4734u;
            // 0x1b4738: 0xac50a930  sw          $s0, -0x56D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA8u;
    if (runtime->hasFunction(0x1C5CA8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B473Cu; }
        if (ctx->pc != 0x1B473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CA8_0x1c5ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B473Cu; }
        if (ctx->pc != 0x1B473Cu) { return; }
    }
    ctx->pc = 0x1B473Cu;
label_1b473c:
    // 0x1b473c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b473cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4748: 0x8070c56  j           func_1C3158
    ctx->pc = 0x1B4748u;
    ctx->pc = 0x1B474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4748u;
            // 0x1b474c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3158u;
    {
        auto targetFn = runtime->lookupFunction(0x1C3158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B4750u;
label_1b4750:
    // 0x1b4750: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b4750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b4754: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1b4754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1b4758: 0x8c4ca930  lw          $t4, -0x56D0($v0)
    ctx->pc = 0x1b4758u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945072)));
    // 0x1b475c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b475cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4760: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x1b4760u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4764: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x1b4764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x1b4768: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x1b4768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x1b476c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1b476cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1b4770: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b4770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b4774: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b4774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4778: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b4778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b477c: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x1b477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x1b4780: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x1b4780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x1b4784: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x1b4784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x1b4788: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x1b4788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x1b478c: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x1b478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x1b4790: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x1b4790u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1b4794: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x1b4794u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1b4798: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x1b4798u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1b479c: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x1b479cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1b47a0: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x1b47a0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1b47a4: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x1b47a4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1b47a8: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x1b47a8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1b47ac: 0x118d0005  beq         $t4, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B47ACu;
    {
        const bool branch_taken_0x1b47ac = (GPR_U64(ctx, 12) == GPR_U64(ctx, 13));
        ctx->pc = 0x1B47B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47ACu;
            // 0x1b47b0: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47ac) {
            ctx->pc = 0x1B47C4u;
            goto label_1b47c4;
        }
    }
    ctx->pc = 0x1B47B4u;
    // 0x1b47b4: 0xc04b984  jal         func_12E610
    ctx->pc = 0x1B47B4u;
    SET_GPR_U32(ctx, 31, 0x1B47BCu);
    ctx->pc = 0x12E610u;
    if (runtime->hasFunction(0x12E610u)) {
        auto targetFn = runtime->lookupFunction(0x12E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47BCu; }
        if (ctx->pc != 0x1B47BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E610_0x12e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47BCu; }
        if (ctx->pc != 0x1B47BCu) { return; }
    }
    ctx->pc = 0x1B47BCu;
label_1b47bc:
    // 0x1b47bc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1B47BCu;
    SET_GPR_U32(ctx, 31, 0x1B47C4u);
    ctx->pc = 0x1B47C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47BCu;
            // 0x1b47c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47C4u; }
        if (ctx->pc != 0x1B47C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47C4u; }
        if (ctx->pc != 0x1B47C4u) { return; }
    }
    ctx->pc = 0x1B47C4u;
label_1b47c4:
    // 0x1b47c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b47c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b47c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B47C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B47CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47C8u;
            // 0x1b47cc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B47D0u;
    ctx->pc = 0x1b47d0u;
}
