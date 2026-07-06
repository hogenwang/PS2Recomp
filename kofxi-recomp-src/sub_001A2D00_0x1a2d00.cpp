#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2D00
// Address: 0x1a2d00 - 0x1a2e20
void sub_001A2D00_0x1a2d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2D00_0x1a2d00");
#endif

    switch (ctx->pc) {
        case 0x1a2d10u: goto label_1a2d10;
        case 0x1a2d2cu: goto label_1a2d2c;
        case 0x1a2d7cu: goto label_1a2d7c;
        default: break;
    }

    ctx->pc = 0x1a2d00u;

    // 0x1a2d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2d08: 0xc068874  jal         func_1A21D0
    ctx->pc = 0x1A2D08u;
    SET_GPR_U32(ctx, 31, 0x1A2D10u);
    ctx->pc = 0x1A21D0u;
    if (runtime->hasFunction(0x1A21D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A21D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D10u; }
        if (ctx->pc != 0x1A2D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A21D0_0x1a21d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D10u; }
        if (ctx->pc != 0x1A2D10u) { return; }
    }
    ctx->pc = 0x1A2D10u;
label_1a2d10:
    // 0x1a2d10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2d14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2d18: 0x9042ea10  lbu         $v0, -0x15F0($v0)
    ctx->pc = 0x1a2d18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961680)));
    // 0x1a2d1c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A2D1Cu;
    {
        const bool branch_taken_0x1a2d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2d1c) {
            ctx->pc = 0x1A2D60u;
            goto label_1a2d60;
        }
    }
    ctx->pc = 0x1A2D24u;
    // 0x1a2d24: 0xc068874  jal         func_1A21D0
    ctx->pc = 0x1A2D24u;
    SET_GPR_U32(ctx, 31, 0x1A2D2Cu);
    ctx->pc = 0x1A21D0u;
    if (runtime->hasFunction(0x1A21D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A21D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D2Cu; }
        if (ctx->pc != 0x1A2D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A21D0_0x1a21d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D2Cu; }
        if (ctx->pc != 0x1A2D2Cu) { return; }
    }
    ctx->pc = 0x1A2D2Cu;
label_1a2d2c:
    // 0x1a2d2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2d30: 0x9442ea20  lhu         $v0, -0x15E0($v0)
    ctx->pc = 0x1a2d30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961696)));
    // 0x1a2d34: 0x30425000  andi        $v0, $v0, 0x5000
    ctx->pc = 0x1a2d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)20480);
    // 0x1a2d38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a2d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a2d3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2d3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2d40: 0x38425000  xori        $v0, $v0, 0x5000
    ctx->pc = 0x1a2d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20480);
    // 0x1a2d44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2D44u;
    {
        const bool branch_taken_0x1a2d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d44) {
            ctx->pc = 0x1A2D60u;
            goto label_1a2d60;
        }
    }
    ctx->pc = 0x1A2D4Cu;
    // 0x1a2d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2d50: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a2d54: 0xa04395b8  sb          $v1, -0x6A48($v0)
    ctx->pc = 0x1a2d54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940088), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2d58: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A2D58u;
    {
        const bool branch_taken_0x1a2d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2D58u;
            // 0x1a2d5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d58) {
            ctx->pc = 0x1A2E14u;
            goto label_1a2e14;
        }
    }
    ctx->pc = 0x1A2D60u;
label_1a2d60:
    // 0x1a2d60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2d64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2d68: 0x9042ea14  lbu         $v0, -0x15EC($v0)
    ctx->pc = 0x1a2d68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961684)));
    // 0x1a2d6c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A2D6Cu;
    {
        const bool branch_taken_0x1a2d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2d6c) {
            ctx->pc = 0x1A2DB0u;
            goto label_1a2db0;
        }
    }
    ctx->pc = 0x1A2D74u;
    // 0x1a2d74: 0xc068874  jal         func_1A21D0
    ctx->pc = 0x1A2D74u;
    SET_GPR_U32(ctx, 31, 0x1A2D7Cu);
    ctx->pc = 0x1A21D0u;
    if (runtime->hasFunction(0x1A21D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A21D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D7Cu; }
        if (ctx->pc != 0x1A2D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A21D0_0x1a21d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2D7Cu; }
        if (ctx->pc != 0x1A2D7Cu) { return; }
    }
    ctx->pc = 0x1A2D7Cu;
label_1a2d7c:
    // 0x1a2d7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2d80: 0x9442ea2c  lhu         $v0, -0x15D4($v0)
    ctx->pc = 0x1a2d80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961708)));
    // 0x1a2d84: 0x30425000  andi        $v0, $v0, 0x5000
    ctx->pc = 0x1a2d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)20480);
    // 0x1a2d88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a2d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a2d8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2d8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2d90: 0x38425000  xori        $v0, $v0, 0x5000
    ctx->pc = 0x1a2d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20480);
    // 0x1a2d94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2D94u;
    {
        const bool branch_taken_0x1a2d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d94) {
            ctx->pc = 0x1A2DB0u;
            goto label_1a2db0;
        }
    }
    ctx->pc = 0x1A2D9Cu;
    // 0x1a2d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2da0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a2da4: 0xa04395b8  sb          $v1, -0x6A48($v0)
    ctx->pc = 0x1a2da4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940088), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2da8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A2DA8u;
    {
        const bool branch_taken_0x1a2da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DA8u;
            // 0x1a2dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2da8) {
            ctx->pc = 0x1A2E14u;
            goto label_1a2e14;
        }
    }
    ctx->pc = 0x1A2DB0u;
label_1a2db0:
    // 0x1a2db0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2db4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2db8: 0x9042ea10  lbu         $v0, -0x15F0($v0)
    ctx->pc = 0x1a2db8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961680)));
    // 0x1a2dbc: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2DBCu;
    {
        const bool branch_taken_0x1a2dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2dbc) {
            ctx->pc = 0x1A2DE4u;
            goto label_1a2de4;
        }
    }
    ctx->pc = 0x1A2DC4u;
    // 0x1a2dc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2dc8: 0x9042ea14  lbu         $v0, -0x15EC($v0)
    ctx->pc = 0x1a2dc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961684)));
    // 0x1a2dcc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2DCCu;
    {
        const bool branch_taken_0x1a2dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2dcc) {
            ctx->pc = 0x1A2DE4u;
            goto label_1a2de4;
        }
    }
    ctx->pc = 0x1A2DD4u;
    // 0x1a2dd4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a2dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ddc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A2DDCu;
    {
        const bool branch_taken_0x1a2ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DDCu;
            // 0x1a2de0: 0xa06095b8  sb          $zero, -0x6A48($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294940088), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ddc) {
            ctx->pc = 0x1A2E14u;
            goto label_1a2e14;
        }
    }
    ctx->pc = 0x1A2DE4u;
label_1a2de4:
    // 0x1a2de4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a2de8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2dec: 0x8c63e680  lw          $v1, -0x1980($v1)
    ctx->pc = 0x1a2decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960768)));
    // 0x1a2df0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2df4: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1a2df4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x1a2df8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2DF8u;
    {
        const bool branch_taken_0x1a2df8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DF8u;
            // 0x1a2dfc: 0xac43e680  sw          $v1, -0x1980($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2df8) {
            ctx->pc = 0x1A2E10u;
            goto label_1a2e10;
        }
    }
    ctx->pc = 0x1A2E00u;
    // 0x1a2e00: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a2e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2E08u;
    {
        const bool branch_taken_0x1a2e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E08u;
            // 0x1a2e0c: 0xa06095b8  sb          $zero, -0x6A48($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294940088), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e08) {
            ctx->pc = 0x1A2E14u;
            goto label_1a2e14;
        }
    }
    ctx->pc = 0x1A2E10u;
label_1a2e10:
    // 0x1a2e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2e14:
    // 0x1a2e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E18u;
            // 0x1a2e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2E20u;
    ctx->pc = 0x1a2e20u;
}
