#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343630
// Address: 0x343630 - 0x3436e0
void sub_00343630_0x343630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343630_0x343630");
#endif

    switch (ctx->pc) {
        case 0x343650u: goto label_343650;
        case 0x3436b4u: goto label_3436b4;
        default: break;
    }

    ctx->pc = 0x343630u;

    // 0x343630: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x343630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343634: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343638: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x343638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34363c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34363cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x343640: 0xac604348  sw          $zero, 0x4348($v1)
    ctx->pc = 0x343640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17224), GPR_U32(ctx, 0));
    // 0x343644: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x343644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x343648: 0x80558d4  j           func_156350
    ctx->pc = 0x343648u;
    ctx->pc = 0x34364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343648u;
            // 0x34364c: 0xac40d9c0  sw          $zero, -0x2640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156350_0x156350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x343650u;
label_343650:
    // 0x343650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343654: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x343654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x343658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34365c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34365cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343660: 0x8c664348  lw          $a2, 0x4348($v1)
    ctx->pc = 0x343660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17224)));
    // 0x343664: 0x34a5d70a  ori         $a1, $a1, 0xD70A
    ctx->pc = 0x343664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x343668: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x343668u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34366c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34366cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343670: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x343670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x343674: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x343674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x343678: 0xc461d9c0  lwc1        $f1, -0x2640($v1)
    ctx->pc = 0x343678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34367c: 0xac864348  sw          $a2, 0x4348($a0)
    ctx->pc = 0x34367cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17224), GPR_U32(ctx, 6));
    // 0x343680: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x343680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x343684: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x343684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x343688: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x343688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x34368c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34368cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343690: 0x0  nop
    ctx->pc = 0x343690u;
    // NOP
    // 0x343694: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x343694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343698: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x343698u;
    {
        const bool branch_taken_0x343698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343698u;
            // 0x34369c: 0xe461d9c0  swc1        $f1, -0x2640($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343698) {
            ctx->pc = 0x3436B4u;
            goto label_3436b4;
        }
    }
    ctx->pc = 0x3436A0u;
    // 0x3436a0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3436a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3436a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3436a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3436a8: 0x8c44f78c  lw          $a0, -0x874($v0)
    ctx->pc = 0x3436a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    // 0x3436ac: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3436ACu;
    SET_GPR_U32(ctx, 31, 0x3436B4u);
    ctx->pc = 0x3436B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3436ACu;
            // 0x3436b0: 0xe460d9c0  swc1        $f0, -0x2640($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957504), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3436B4u; }
        if (ctx->pc != 0x3436B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3436B4u; }
        if (ctx->pc != 0x3436B4u) { return; }
    }
    ctx->pc = 0x3436B4u;
label_3436b4:
    // 0x3436b4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3436b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3436b8: 0x8c634348  lw          $v1, 0x4348($v1)
    ctx->pc = 0x3436b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17224)));
    // 0x3436bc: 0x2861ffd9  slti        $at, $v1, -0x27
    ctx->pc = 0x3436bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967257) ? 1 : 0);
    // 0x3436c0: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3436C0u;
    {
        const bool branch_taken_0x3436c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3436c0) {
            ctx->pc = 0x3436C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3436C0u;
            // 0x3436c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3436D8u;
            goto label_3436d8;
        }
    }
    ctx->pc = 0x3436C8u;
    // 0x3436c8: 0x2404ffd8  addiu       $a0, $zero, -0x28
    ctx->pc = 0x3436c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x3436cc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3436ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3436d0: 0xac644348  sw          $a0, 0x4348($v1)
    ctx->pc = 0x3436d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17224), GPR_U32(ctx, 4));
    // 0x3436d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3436d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3436d8:
    // 0x3436d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3436D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3436DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3436D8u;
            // 0x3436dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3436E0u;
    ctx->pc = 0x3436e0u;
}
