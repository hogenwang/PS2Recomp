#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FB68
// Address: 0x26fb68 - 0x26fc20
void sub_0026FB68_0x26fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FB68_0x26fb68");
#endif

    switch (ctx->pc) {
        case 0x26fba4u: goto label_26fba4;
        case 0x26fbc8u: goto label_26fbc8;
        case 0x26fbe4u: goto label_26fbe4;
        default: break;
    }

    ctx->pc = 0x26fb68u;

    // 0x26fb68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26fb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26fb6c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26fb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26fb70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26fb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26fb74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26fb74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26fb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26fb7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26fb7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26fb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26fb84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26fb88: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x26fb88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26fb8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FB8Cu;
    {
        const bool branch_taken_0x26fb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB8Cu;
            // 0x26fb90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb8c) {
            ctx->pc = 0x26FB9Cu;
            goto label_26fb9c;
        }
    }
    ctx->pc = 0x26FB94u;
    // 0x26fb94: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26FB94u;
    {
        const bool branch_taken_0x26fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB94u;
            // 0x26fb98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb94) {
            ctx->pc = 0x26FC00u;
            goto label_26fc00;
        }
    }
    ctx->pc = 0x26FB9Cu;
label_26fb9c:
    // 0x26fb9c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26FB9Cu;
    SET_GPR_U32(ctx, 31, 0x26FBA4u);
    ctx->pc = 0x26FBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB9Cu;
            // 0x26fba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBA4u; }
        if (ctx->pc != 0x26FBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBA4u; }
        if (ctx->pc != 0x26FBA4u) { return; }
    }
    ctx->pc = 0x26FBA4u;
label_26fba4:
    // 0x26fba4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26fba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fba8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x26fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26fbac: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x26fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26fbb0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26fbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fbb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FBB4u;
    {
        const bool branch_taken_0x26fbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBB4u;
            // 0x26fbb8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbb4) {
            ctx->pc = 0x26FBD0u;
            goto label_26fbd0;
        }
    }
    ctx->pc = 0x26FBBCu;
    // 0x26fbbc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26fbc0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26FBC0u;
    SET_GPR_U32(ctx, 31, 0x26FBC8u);
    ctx->pc = 0x26FBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBC0u;
            // 0x26fbc4: 0x24a59938  addiu       $a1, $a1, -0x66C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBC8u; }
        if (ctx->pc != 0x26FBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBC8u; }
        if (ctx->pc != 0x26FBC8u) { return; }
    }
    ctx->pc = 0x26FBC8u;
label_26fbc8:
    // 0x26fbc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26FBC8u;
    {
        const bool branch_taken_0x26fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBC8u;
            // 0x26fbcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbc8) {
            ctx->pc = 0x26FC00u;
            goto label_26fc00;
        }
    }
    ctx->pc = 0x26FBD0u;
label_26fbd0:
    // 0x26fbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26fbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26fbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbdc: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26FBDCu;
    SET_GPR_U32(ctx, 31, 0x26FBE4u);
    ctx->pc = 0x26FBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBDCu;
            // 0x26fbe0: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBE4u; }
        if (ctx->pc != 0x26FBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FBE4u; }
        if (ctx->pc != 0x26FBE4u) { return; }
    }
    ctx->pc = 0x26FBE4u;
label_26fbe4:
    // 0x26fbe4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x26fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26fbe8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x26fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26fbec: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x26fbecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26fbf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26fbf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26fbf8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x26fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x26fbfc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x26fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_26fc00:
    // 0x26fc00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26fc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26fc04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26fc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fc08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26fc08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fc0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26fc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fc14: 0x3e00008  jr          $ra
    ctx->pc = 0x26FC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC14u;
            // 0x26fc18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FC1Cu;
    // 0x26fc1c: 0x0  nop
    ctx->pc = 0x26fc1cu;
    // NOP
    ctx->pc = 0x26fc20u;
}
