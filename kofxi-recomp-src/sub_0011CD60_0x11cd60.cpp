#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011CD60
// Address: 0x11cd60 - 0x11ce10
void sub_0011CD60_0x11cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CD60_0x11cd60");
#endif

    switch (ctx->pc) {
        case 0x11cd8cu: goto label_11cd8c;
        case 0x11cdc8u: goto label_11cdc8;
        case 0x11cddcu: goto label_11cddc;
        default: break;
    }

    ctx->pc = 0x11cd60u;

    // 0x11cd60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11cd64: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11cd68: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11cd68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11cd6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11cd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11cd70: 0x8e22b988  lw          $v0, -0x4678($s1)
    ctx->pc = 0x11cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949256)));
    // 0x11cd74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CD74u;
    {
        const bool branch_taken_0x11cd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD74u;
            // 0x11cd78: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd74) {
            ctx->pc = 0x11CD84u;
            goto label_11cd84;
        }
    }
    ctx->pc = 0x11CD7Cu;
    // 0x11cd7c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11CD7Cu;
    {
        const bool branch_taken_0x11cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD7Cu;
            // 0x11cd80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd7c) {
            ctx->pc = 0x11CDF8u;
            goto label_11cdf8;
        }
    }
    ctx->pc = 0x11CD84u;
label_11cd84:
    // 0x11cd84: 0xc04782a  jal         func_11E0A8
    ctx->pc = 0x11CD84u;
    SET_GPR_U32(ctx, 31, 0x11CD8Cu);
    ctx->pc = 0x11CD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD84u;
            // 0x11cd88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E0A8u;
    if (runtime->hasFunction(0x11E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x11E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CD8Cu; }
        if (ctx->pc != 0x11CD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E0A8_0x11e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CD8Cu; }
        if (ctx->pc != 0x11CD8Cu) { return; }
    }
    ctx->pc = 0x11CD8Cu;
label_11cd8c:
    // 0x11cd8c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11cd90: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x11cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11cd94: 0x2470dd40  addiu       $s0, $v1, -0x22C0
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958400));
    // 0x11cd98: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11cd9c: 0xac62dd40  sw          $v0, -0x22C0($v1)
    ctx->pc = 0x11cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958400), GPR_U32(ctx, 2));
    // 0x11cda0: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11cda4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11cda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cdac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11cdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11cdb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdb4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11cdb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11cdb8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11cdb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdbc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11cdbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11cdc0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11CDC0u;
    SET_GPR_U32(ctx, 31, 0x11CDC8u);
    ctx->pc = 0x11CDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDC0u;
            // 0x11cdc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CDC8u; }
        if (ctx->pc != 0x11CDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CDC8u; }
        if (ctx->pc != 0x11CDC8u) { return; }
    }
    ctx->pc = 0x11CDC8u;
label_11cdc8:
    // 0x11cdc8: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11CDC8u;
    {
        const bool branch_taken_0x11cdc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11CDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDC8u;
            // 0x11cdcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdc8) {
            ctx->pc = 0x11CDF8u;
            goto label_11cdf8;
        }
    }
    ctx->pc = 0x11CDD0u;
    // 0x11cdd0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11cdd4: 0xc043fea  jal         func_10FFA8
    ctx->pc = 0x11CDD4u;
    SET_GPR_U32(ctx, 31, 0x11CDDCu);
    ctx->pc = 0x11CDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDD4u;
            // 0x11cdd8: 0x34840019  ori         $a0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FFA8u;
    if (runtime->hasFunction(0x10FFA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CDDCu; }
        if (ctx->pc != 0x11CDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FFA8_0x10ffa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CDDCu; }
        if (ctx->pc != 0x11CDDCu) { return; }
    }
    ctx->pc = 0x11CDDCu;
label_11cddc:
    // 0x11cddc: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x11cddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11cde0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cde4: 0x50e20001  beql        $a3, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CDE4u;
    {
        const bool branch_taken_0x11cde4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x11cde4) {
            ctx->pc = 0x11CDE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDE4u;
            // 0x11cde8: 0xae20b988  sw          $zero, -0x4678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294949256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CDECu;
            goto label_11cdec;
        }
    }
    ctx->pc = 0x11CDECu;
label_11cdec:
    // 0x11cdec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11cdf0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x11cdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdf4: 0xac60b994  sw          $zero, -0x466C($v1)
    ctx->pc = 0x11cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949268), GPR_U32(ctx, 0));
label_11cdf8:
    // 0x11cdf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11cdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cdfc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11cdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ce00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11ce00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ce04: 0x3e00008  jr          $ra
    ctx->pc = 0x11CE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE04u;
            // 0x11ce08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CE0Cu;
    // 0x11ce0c: 0x0  nop
    ctx->pc = 0x11ce0cu;
    // NOP
    ctx->pc = 0x11ce10u;
}
