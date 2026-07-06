#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014AF50
// Address: 0x14af50 - 0x14b010
void sub_0014AF50_0x14af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AF50_0x14af50");
#endif

    switch (ctx->pc) {
        case 0x14af70u: goto label_14af70;
        case 0x14aff8u: goto label_14aff8;
        default: break;
    }

    ctx->pc = 0x14af50u;

    // 0x14af50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14af50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14af54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14af58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14af58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14af5c: 0x8c445d08  lw          $a0, 0x5D08($v0)
    ctx->pc = 0x14af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    // 0x14af60: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AF60u;
    {
        const bool branch_taken_0x14af60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14af60) {
            ctx->pc = 0x14AF78u;
            goto label_14af78;
        }
    }
    ctx->pc = 0x14AF68u;
    // 0x14af68: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x14AF68u;
    SET_GPR_U32(ctx, 31, 0x14AF70u);
    ctx->pc = 0x1B04A0u;
    if (runtime->hasFunction(0x1B04A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF70u; }
        if (ctx->pc != 0x14AF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04A0_0x1b04a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF70u; }
        if (ctx->pc != 0x14AF70u) { return; }
    }
    ctx->pc = 0x14AF70u;
label_14af70:
    // 0x14af70: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14af74: 0xac405d08  sw          $zero, 0x5D08($v0)
    ctx->pc = 0x14af74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23816), GPR_U32(ctx, 0));
label_14af78:
    // 0x14af78: 0x3c030050  lui         $v1, 0x50
    ctx->pc = 0x14af78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)80 << 16));
    // 0x14af7c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14af80: 0x246372c0  addiu       $v1, $v1, 0x72C0
    ctx->pc = 0x14af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29376));
    // 0x14af84: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14af84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14af88: 0xac435d48  sw          $v1, 0x5D48($v0)
    ctx->pc = 0x14af88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23880), GPR_U32(ctx, 3));
    // 0x14af8c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14af90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x14af90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14af94: 0xa0445d80  sb          $a0, 0x5D80($v0)
    ctx->pc = 0x14af94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23936), (uint8_t)GPR_U32(ctx, 4));
    // 0x14af98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14af98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14af9c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afa0: 0xfc435d50  sd          $v1, 0x5D50($v0)
    ctx->pc = 0x14afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 23888), GPR_U64(ctx, 3));
    // 0x14afa4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afa8: 0xa0445d81  sb          $a0, 0x5D81($v0)
    ctx->pc = 0x14afa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23937), (uint8_t)GPR_U32(ctx, 4));
    // 0x14afac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afb0: 0xfc435d58  sd          $v1, 0x5D58($v0)
    ctx->pc = 0x14afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 23896), GPR_U64(ctx, 3));
    // 0x14afb4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afb8: 0xa0445d82  sb          $a0, 0x5D82($v0)
    ctx->pc = 0x14afb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23938), (uint8_t)GPR_U32(ctx, 4));
    // 0x14afbc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afc0: 0xfc435d60  sd          $v1, 0x5D60($v0)
    ctx->pc = 0x14afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 23904), GPR_U64(ctx, 3));
    // 0x14afc4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afc8: 0xa0445d83  sb          $a0, 0x5D83($v0)
    ctx->pc = 0x14afc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23939), (uint8_t)GPR_U32(ctx, 4));
    // 0x14afcc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afd0: 0xfc435d68  sd          $v1, 0x5D68($v0)
    ctx->pc = 0x14afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 23912), GPR_U64(ctx, 3));
    // 0x14afd4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afd8: 0xa0445d84  sb          $a0, 0x5D84($v0)
    ctx->pc = 0x14afd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23940), (uint8_t)GPR_U32(ctx, 4));
    // 0x14afdc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afe0: 0xfc435d70  sd          $v1, 0x5D70($v0)
    ctx->pc = 0x14afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 23920), GPR_U64(ctx, 3));
    // 0x14afe4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14afe8: 0xa0445d85  sb          $a0, 0x5D85($v0)
    ctx->pc = 0x14afe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23941), (uint8_t)GPR_U32(ctx, 4));
    // 0x14afec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14aff0: 0xc052c04  jal         func_14B010
    ctx->pc = 0x14AFF0u;
    SET_GPR_U32(ctx, 31, 0x14AFF8u);
    ctx->pc = 0x14AFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFF0u;
            // 0x14aff4: 0xfc435d78  sd          $v1, 0x5D78($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 23928), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B010u;
    if (runtime->hasFunction(0x14B010u)) {
        auto targetFn = runtime->lookupFunction(0x14B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFF8u; }
        if (ctx->pc != 0x14AFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B010_0x14b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFF8u; }
        if (ctx->pc != 0x14AFF8u) { return; }
    }
    ctx->pc = 0x14AFF8u;
label_14aff8:
    // 0x14aff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14aff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14affc: 0x3e00008  jr          $ra
    ctx->pc = 0x14AFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFFCu;
            // 0x14b000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B004u;
    // 0x14b004: 0x0  nop
    ctx->pc = 0x14b004u;
    // NOP
    // 0x14b008: 0x0  nop
    ctx->pc = 0x14b008u;
    // NOP
    // 0x14b00c: 0x0  nop
    ctx->pc = 0x14b00cu;
    // NOP
    ctx->pc = 0x14b010u;
}
