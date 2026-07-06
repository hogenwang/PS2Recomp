#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C03B8
// Address: 0x1c03b8 - 0x1c0458
void sub_001C03B8_0x1c03b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C03B8_0x1c03b8");
#endif

    switch (ctx->pc) {
        case 0x1c03d4u: goto label_1c03d4;
        case 0x1c03f4u: goto label_1c03f4;
        case 0x1c0424u: goto label_1c0424;
        case 0x1c042cu: goto label_1c042c;
        default: break;
    }

    ctx->pc = 0x1c03b8u;

    // 0x1c03b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c03b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c03bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c03bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c03c0: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x1c03c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c03c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c03cc: 0xc0736de  jal         func_1CDB78
    ctx->pc = 0x1C03CCu;
    SET_GPR_U32(ctx, 31, 0x1C03D4u);
    ctx->pc = 0x1C03D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03CCu;
            // 0x1c03d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB78u;
    if (runtime->hasFunction(0x1CDB78u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03D4u; }
        if (ctx->pc != 0x1C03D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB78_0x1cdb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03D4u; }
        if (ctx->pc != 0x1C03D4u) { return; }
    }
    ctx->pc = 0x1C03D4u;
label_1c03d4:
    // 0x1c03d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c03d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c03d8: 0x2622c7d0  addiu       $v0, $s1, -0x3830
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952912));
    // 0x1c03dc: 0x24849710  addiu       $a0, $a0, -0x68F0
    ctx->pc = 0x1c03dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940432));
    // 0x1c03e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c03e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c03e4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C03E4u;
    {
        const bool branch_taken_0x1c03e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C03E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03E4u;
            // 0x1c03e8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03e4) {
            ctx->pc = 0x1C0400u;
            goto label_1c0400;
        }
    }
    ctx->pc = 0x1C03ECu;
    // 0x1c03ec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C03ECu;
    SET_GPR_U32(ctx, 31, 0x1C03F4u);
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03F4u; }
        if (ctx->pc != 0x1C03F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C03F4u; }
        if (ctx->pc != 0x1C03F4u) { return; }
    }
    ctx->pc = 0x1C03F4u;
label_1c03f4:
    // 0x1c03f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C03F4u;
    {
        const bool branch_taken_0x1c03f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C03F4u;
            // 0x1c03f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03f4) {
            ctx->pc = 0x1C0448u;
            goto label_1c0448;
        }
    }
    ctx->pc = 0x1C03FCu;
    // 0x1c03fc: 0x0  nop
    ctx->pc = 0x1c03fcu;
    // NOP
label_1c0400:
    // 0x1c0400: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x1c0400u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c0404: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0404u;
    {
        const bool branch_taken_0x1c0404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0404u;
            // 0x1c0408: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0404) {
            ctx->pc = 0x1C0424u;
            goto label_1c0424;
        }
    }
    ctx->pc = 0x1C040Cu;
    // 0x1c040c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C040Cu;
    {
        const bool branch_taken_0x1c040c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C040Cu;
            // 0x1c0410: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c040c) {
            ctx->pc = 0x1C0424u;
            goto label_1c0424;
        }
    }
    ctx->pc = 0x1C0414u;
    // 0x1c0414: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0414u;
    {
        const bool branch_taken_0x1c0414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0414u;
            // 0x1c0418: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0414) {
            ctx->pc = 0x1C0424u;
            goto label_1c0424;
        }
    }
    ctx->pc = 0x1C041Cu;
    // 0x1c041c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C041Cu;
    SET_GPR_U32(ctx, 31, 0x1C0424u);
    ctx->pc = 0x1C0420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C041Cu;
            // 0x1c0420: 0x24849750  addiu       $a0, $a0, -0x68B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0424u; }
        if (ctx->pc != 0x1C0424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0424u; }
        if (ctx->pc != 0x1C0424u) { return; }
    }
    ctx->pc = 0x1C0424u;
label_1c0424:
    // 0x1c0424: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1C0424u;
    SET_GPR_U32(ctx, 31, 0x1C042Cu);
    ctx->pc = 0x1C0300u;
    if (runtime->hasFunction(0x1C0300u)) {
        auto targetFn = runtime->lookupFunction(0x1C0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C042Cu; }
        if (ctx->pc != 0x1C042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0300_0x1c0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C042Cu; }
        if (ctx->pc != 0x1C042Cu) { return; }
    }
    ctx->pc = 0x1C042Cu;
label_1c042c:
    // 0x1c042c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c042cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0430: 0xa220c7d0  sb          $zero, -0x3830($s1)
    ctx->pc = 0x1c0430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294952912), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0434: 0x2463c834  addiu       $v1, $v1, -0x37CC
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953012));
    // 0x1c0438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c043c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0440: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c0440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c0444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0448:
    // 0x1c0448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c044c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0450: 0x80736fc  j           func_1CDBF0
    ctx->pc = 0x1C0450u;
    ctx->pc = 0x1C0454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0450u;
            // 0x1c0454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDBF0u;
    if (runtime->hasFunction(0x1CDBF0u)) {
        auto targetFn = runtime->lookupFunction(0x1CDBF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDBF0_0x1cdbf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0458u;
    ctx->pc = 0x1c0458u;
}
