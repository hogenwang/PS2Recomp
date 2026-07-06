#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152CC0
// Address: 0x152cc0 - 0x152e00
void sub_00152CC0_0x152cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152CC0_0x152cc0");
#endif

    switch (ctx->pc) {
        case 0x152ce4u: goto label_152ce4;
        default: break;
    }

    ctx->pc = 0x152cc0u;

    // 0x152cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152cc4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152ccc: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x152cccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x152cd0: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x152cd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x152cd4: 0x5020001f  beql        $at, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x152CD4u;
    {
        const bool branch_taken_0x152cd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cd4) {
            ctx->pc = 0x152CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152CD4u;
            // 0x152cd8: 0x2443fff7  addiu       $v1, $v0, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152D54u;
            goto label_152d54;
        }
    }
    ctx->pc = 0x152CDCu;
    // 0x152cdc: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x152CDCu;
    SET_GPR_U32(ctx, 31, 0x152CE4u);
    ctx->pc = 0x152CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152CDCu;
            // 0x152ce0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (runtime->hasFunction(0x152AE0u)) {
        auto targetFn = runtime->lookupFunction(0x152AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152CE4u; }
        if (ctx->pc != 0x152CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152AE0_0x152ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152CE4u; }
        if (ctx->pc != 0x152CE4u) { return; }
    }
    ctx->pc = 0x152CE4u;
label_152ce4:
    // 0x152ce4: 0x9444000c  lhu         $a0, 0xC($v0)
    ctx->pc = 0x152ce4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x152ce8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x152ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x152cec: 0xa0644530  sb          $a0, 0x4530($v1)
    ctx->pc = 0x152cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17712), (uint8_t)GPR_U32(ctx, 4));
    // 0x152cf0: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x152cf0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x152cf4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x152cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x152cf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x152cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x152cfc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152CFCu;
    {
        const bool branch_taken_0x152cfc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x152cfc) {
            ctx->pc = 0x152D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152CFCu;
            // 0x152d00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152D10u;
            goto label_152d10;
        }
    }
    ctx->pc = 0x152D04u;
    // 0x152d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152D08u;
    {
        const bool branch_taken_0x152d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D08u;
            // 0x152d0c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d08) {
            ctx->pc = 0x152D28u;
            goto label_152d28;
        }
    }
    ctx->pc = 0x152D10u;
label_152d10:
    // 0x152d10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152d14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x152d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x152d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d1c: 0x0  nop
    ctx->pc = 0x152d1cu;
    // NOP
    // 0x152d20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x152d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152d24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x152d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_152d28:
    // 0x152d28: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x152d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x152d2c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x152d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x152d30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d34: 0x0  nop
    ctx->pc = 0x152d34u;
    // NOP
    // 0x152d38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x152d38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x152d3c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152d40: 0xa0444538  sb          $a0, 0x4538($v0)
    ctx->pc = 0x152d40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17720), (uint8_t)GPR_U32(ctx, 4));
    // 0x152d44: 0x0  nop
    ctx->pc = 0x152d44u;
    // NOP
    // 0x152d48: 0x0  nop
    ctx->pc = 0x152d48u;
    // NOP
    // 0x152d4c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x152D4Cu;
    {
        const bool branch_taken_0x152d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D4Cu;
            // 0x152d50: 0xe4604534  swc1        $f0, 0x4534($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 17716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d4c) {
            ctx->pc = 0x152DE8u;
            goto label_152de8;
        }
    }
    ctx->pc = 0x152D54u;
label_152d54:
    // 0x152d54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x152d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x152d58: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x152D58u;
    {
        const bool branch_taken_0x152d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152d58) {
            ctx->pc = 0x152D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152D58u;
            // 0x152d5c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152D9Cu;
            goto label_152d9c;
        }
    }
    ctx->pc = 0x152D60u;
    // 0x152d60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x152d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152d64: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152D64u;
    {
        const bool branch_taken_0x152d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152d64) {
            ctx->pc = 0x152D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152D64u;
            // 0x152d68: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152D74u;
            goto label_152d74;
        }
    }
    ctx->pc = 0x152D6Cu;
    // 0x152d6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x152D6Cu;
    {
        const bool branch_taken_0x152d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D6Cu;
            // 0x152d70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d6c) {
            ctx->pc = 0x152DC4u;
            goto label_152dc4;
        }
    }
    ctx->pc = 0x152D74u;
label_152d74:
    // 0x152d74: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152d78: 0xa0434530  sb          $v1, 0x4530($v0)
    ctx->pc = 0x152d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17712), (uint8_t)GPR_U32(ctx, 3));
    // 0x152d7c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x152d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x152d80: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x152d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x152d84: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152d88: 0xac434534  sw          $v1, 0x4534($v0)
    ctx->pc = 0x152d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17716), GPR_U32(ctx, 3));
    // 0x152d8c: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x152d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x152d90: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152d94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x152D94u;
    {
        const bool branch_taken_0x152d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D94u;
            // 0x152d98: 0xa0434538  sb          $v1, 0x4538($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 17720), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d94) {
            ctx->pc = 0x152DE8u;
            goto label_152de8;
        }
    }
    ctx->pc = 0x152D9Cu;
label_152d9c:
    // 0x152d9c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152da0: 0xa0434530  sb          $v1, 0x4530($v0)
    ctx->pc = 0x152da0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17712), (uint8_t)GPR_U32(ctx, 3));
    // 0x152da4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x152da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x152da8: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x152da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x152dac: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152db0: 0xac434534  sw          $v1, 0x4534($v0)
    ctx->pc = 0x152db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17716), GPR_U32(ctx, 3));
    // 0x152db4: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x152db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x152db8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152dbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152DBCu;
    {
        const bool branch_taken_0x152dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152DBCu;
            // 0x152dc0: 0xa0434538  sb          $v1, 0x4538($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 17720), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152dbc) {
            ctx->pc = 0x152DE8u;
            goto label_152de8;
        }
    }
    ctx->pc = 0x152DC4u;
label_152dc4:
    // 0x152dc4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152dc8: 0xa0434530  sb          $v1, 0x4530($v0)
    ctx->pc = 0x152dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17712), (uint8_t)GPR_U32(ctx, 3));
    // 0x152dcc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x152dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x152dd0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x152dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x152dd4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152dd8: 0xac434534  sw          $v1, 0x4534($v0)
    ctx->pc = 0x152dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17716), GPR_U32(ctx, 3));
    // 0x152ddc: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x152ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x152de0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x152de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x152de4: 0xa0434538  sb          $v1, 0x4538($v0)
    ctx->pc = 0x152de4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17720), (uint8_t)GPR_U32(ctx, 3));
label_152de8:
    // 0x152de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152df0: 0x3e00008  jr          $ra
    ctx->pc = 0x152DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152DF0u;
            // 0x152df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152DF8u;
    // 0x152df8: 0x0  nop
    ctx->pc = 0x152df8u;
    // NOP
    // 0x152dfc: 0x0  nop
    ctx->pc = 0x152dfcu;
    // NOP
    ctx->pc = 0x152e00u;
}
