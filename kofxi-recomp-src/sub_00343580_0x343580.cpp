#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343580
// Address: 0x343580 - 0x343630
void sub_00343580_0x343580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343580_0x343580");
#endif

    switch (ctx->pc) {
        case 0x3435a0u: goto label_3435a0;
        case 0x343604u: goto label_343604;
        case 0x343624u: goto label_343624;
        default: break;
    }

    ctx->pc = 0x343580u;

    // 0x343580: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x343580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343584: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343588: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x343588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34358c: 0xac404348  sw          $zero, 0x4348($v0)
    ctx->pc = 0x34358cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17224), GPR_U32(ctx, 0));
    // 0x343590: 0x80558d4  j           func_156350
    ctx->pc = 0x343590u;
    ctx->pc = 0x343594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343590u;
            // 0x343594: 0x24843540  addiu       $a0, $a0, 0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156350_0x156350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x343598u;
    // 0x343598: 0x0  nop
    ctx->pc = 0x343598u;
    // NOP
    // 0x34359c: 0x0  nop
    ctx->pc = 0x34359cu;
    // NOP
label_3435a0:
    // 0x3435a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3435a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3435a4: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x3435a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
    // 0x3435a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3435a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3435ac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3435acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3435b0: 0x8c664348  lw          $a2, 0x4348($v1)
    ctx->pc = 0x3435b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17224)));
    // 0x3435b4: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x3435b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x3435b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3435b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3435bc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3435bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3435c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3435c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3435c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3435c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3435c8: 0xc461d9c0  lwc1        $f1, -0x2640($v1)
    ctx->pc = 0x3435c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3435cc: 0xac864348  sw          $a2, 0x4348($a0)
    ctx->pc = 0x3435ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17224), GPR_U32(ctx, 6));
    // 0x3435d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3435d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3435d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3435d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3435d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3435d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3435dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3435dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3435e0: 0x0  nop
    ctx->pc = 0x3435e0u;
    // NOP
    // 0x3435e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3435e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3435e8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3435E8u;
    {
        const bool branch_taken_0x3435e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3435ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3435E8u;
            // 0x3435ec: 0xe461d9c0  swc1        $f1, -0x2640($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435e8) {
            ctx->pc = 0x343604u;
            goto label_343604;
        }
    }
    ctx->pc = 0x3435F0u;
    // 0x3435f0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3435f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3435f4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3435f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3435f8: 0x8c44f78c  lw          $a0, -0x874($v0)
    ctx->pc = 0x3435f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    // 0x3435fc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3435FCu;
    SET_GPR_U32(ctx, 31, 0x343604u);
    ctx->pc = 0x343600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3435FCu;
            // 0x343600: 0xe460d9c0  swc1        $f0, -0x2640($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343604u; }
        if (ctx->pc != 0x343604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343604u; }
        if (ctx->pc != 0x343604u) { return; }
    }
    ctx->pc = 0x343604u;
label_343604:
    // 0x343604: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343608: 0x8c634348  lw          $v1, 0x4348($v1)
    ctx->pc = 0x343608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17224)));
    // 0x34360c: 0x2861ffd9  slti        $at, $v1, -0x27
    ctx->pc = 0x34360cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967257) ? 1 : 0);
    // 0x343610: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x343610u;
    {
        const bool branch_taken_0x343610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x343610) {
            ctx->pc = 0x343614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343610u;
            // 0x343614: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343628u;
            goto label_343628;
        }
    }
    ctx->pc = 0x343618u;
    // 0x343618: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x343618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x34361c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34361Cu;
    SET_GPR_U32(ctx, 31, 0x343624u);
    ctx->pc = 0x343620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34361Cu;
            // 0x343620: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343624u; }
        if (ctx->pc != 0x343624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343624u; }
        if (ctx->pc != 0x343624u) { return; }
    }
    ctx->pc = 0x343624u;
label_343624:
    // 0x343624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343628:
    // 0x343628: 0x3e00008  jr          $ra
    ctx->pc = 0x343628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343628u;
            // 0x34362c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x343630u;
    ctx->pc = 0x343630u;
}
