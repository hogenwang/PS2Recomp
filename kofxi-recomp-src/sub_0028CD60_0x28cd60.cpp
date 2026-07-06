#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CD60
// Address: 0x28cd60 - 0x28cdf0
void sub_0028CD60_0x28cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CD60_0x28cd60");
#endif

    switch (ctx->pc) {
        case 0x28cd8cu: goto label_28cd8c;
        case 0x28cd98u: goto label_28cd98;
        case 0x28cdbcu: goto label_28cdbc;
        case 0x28cdd0u: goto label_28cdd0;
        default: break;
    }

    ctx->pc = 0x28cd60u;

    // 0x28cd60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28cd64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28cd68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28cd6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cd6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28cd74: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CD74u;
    {
        const bool branch_taken_0x28cd74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD74u;
            // 0x28cd78: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd74) {
            ctx->pc = 0x28CD84u;
            goto label_28cd84;
        }
    }
    ctx->pc = 0x28CD7Cu;
    // 0x28cd7c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28CD7Cu;
    {
        const bool branch_taken_0x28cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD7Cu;
            // 0x28cd80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd7c) {
            ctx->pc = 0x28CDD4u;
            goto label_28cdd4;
        }
    }
    ctx->pc = 0x28CD84u;
label_28cd84:
    // 0x28cd84: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28CD84u;
    SET_GPR_U32(ctx, 31, 0x28CD8Cu);
    ctx->pc = 0x28CD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD84u;
            // 0x28cd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD8Cu; }
        if (ctx->pc != 0x28CD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD8Cu; }
        if (ctx->pc != 0x28CD8Cu) { return; }
    }
    ctx->pc = 0x28CD8Cu;
label_28cd8c:
    // 0x28cd8c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x28cd8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28cd90: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x28CD90u;
    SET_GPR_U32(ctx, 31, 0x28CD98u);
    ctx->pc = 0x28CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD90u;
            // 0x28cd94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD98u; }
        if (ctx->pc != 0x28CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD98u; }
        if (ctx->pc != 0x28CD98u) { return; }
    }
    ctx->pc = 0x28CD98u;
label_28cd98:
    // 0x28cd98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28cd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd9c: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28CD9Cu;
    {
        const bool branch_taken_0x28cd9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD9Cu;
            // 0x28cda0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd9c) {
            ctx->pc = 0x28CDC4u;
            goto label_28cdc4;
        }
    }
    ctx->pc = 0x28CDA4u;
    // 0x28cda4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x28cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28cda8: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x28cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x28cdac: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x28cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x28cdb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28cdb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdb4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28CDB4u;
    SET_GPR_U32(ctx, 31, 0x28CDBCu);
    ctx->pc = 0x28CDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDB4u;
            // 0x28cdb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDBCu; }
        if (ctx->pc != 0x28CDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDBCu; }
        if (ctx->pc != 0x28CDBCu) { return; }
    }
    ctx->pc = 0x28CDBCu;
label_28cdbc:
    // 0x28cdbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28CDBCu;
    {
        const bool branch_taken_0x28cdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDBCu;
            // 0x28cdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdbc) {
            ctx->pc = 0x28CDD4u;
            goto label_28cdd4;
        }
    }
    ctx->pc = 0x28CDC4u;
label_28cdc4:
    // 0x28cdc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28cdc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdc8: 0xc049c48  jal         func_127120
    ctx->pc = 0x28CDC8u;
    SET_GPR_U32(ctx, 31, 0x28CDD0u);
    ctx->pc = 0x28CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDC8u;
            // 0x28cdcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDD0u; }
        if (ctx->pc != 0x28CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDD0u; }
        if (ctx->pc != 0x28CDD0u) { return; }
    }
    ctx->pc = 0x28CDD0u;
label_28cdd0:
    // 0x28cdd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28cdd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cdd4:
    // 0x28cdd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28cdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28cdd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28cdd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cddc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28cddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cde0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cde0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cde4: 0x3e00008  jr          $ra
    ctx->pc = 0x28CDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDE4u;
            // 0x28cde8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CDECu;
    // 0x28cdec: 0x0  nop
    ctx->pc = 0x28cdecu;
    // NOP
    ctx->pc = 0x28cdf0u;
}
