#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B47D0
// Address: 0x1b47d0 - 0x1b4848
void sub_001B47D0_0x1b47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B47D0_0x1b47d0");
#endif

    switch (ctx->pc) {
        case 0x1b4834u: goto label_1b4834;
        case 0x1b483cu: goto label_1b483c;
        default: break;
    }

    ctx->pc = 0x1b47d0u;

    // 0x1b47d0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b47d4: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1b47d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1b47d8: 0x8c43a930  lw          $v1, -0x56D0($v0)
    ctx->pc = 0x1b47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945072)));
    // 0x1b47dc: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x1b47dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x1b47e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b47e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47e4: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x1b47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x1b47e8: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1b47e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1b47ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b47ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b47f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b47f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47f4: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x1b47f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x1b47f8: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x1b47f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x1b47fc: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x1b47fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x1b4800: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x1b4800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x1b4804: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x1b4804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x1b4808: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x1b4808u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1b480c: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x1b480cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1b4810: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x1b4810u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1b4814: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x1b4814u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1b4818: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x1b4818u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1b481c: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x1b481cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1b4820: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x1b4820u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1b4824: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4824u;
    {
        const bool branch_taken_0x1b4824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4824u;
            // 0x1b4828: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4824) {
            ctx->pc = 0x1B483Cu;
            goto label_1b483c;
        }
    }
    ctx->pc = 0x1B482Cu;
    // 0x1b482c: 0xc04b984  jal         func_12E610
    ctx->pc = 0x1B482Cu;
    SET_GPR_U32(ctx, 31, 0x1B4834u);
    ctx->pc = 0x12E610u;
    if (runtime->hasFunction(0x12E610u)) {
        auto targetFn = runtime->lookupFunction(0x12E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4834u; }
        if (ctx->pc != 0x1B4834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E610_0x12e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4834u; }
        if (ctx->pc != 0x1B4834u) { return; }
    }
    ctx->pc = 0x1B4834u;
label_1b4834:
    // 0x1b4834: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1B4834u;
    SET_GPR_U32(ctx, 31, 0x1B483Cu);
    ctx->pc = 0x1B4838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4834u;
            // 0x1b4838: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B483Cu; }
        if (ctx->pc != 0x1B483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B483Cu; }
        if (ctx->pc != 0x1B483Cu) { return; }
    }
    ctx->pc = 0x1B483Cu;
label_1b483c:
    // 0x1b483c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b4840: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4840u;
            // 0x1b4844: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4848u;
    ctx->pc = 0x1b4848u;
}
