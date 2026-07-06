#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224C60
// Address: 0x224c60 - 0x224e60
void sub_00224C60_0x224c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224C60_0x224c60");
#endif

    switch (ctx->pc) {
        case 0x224cacu: goto label_224cac;
        case 0x224cd4u: goto label_224cd4;
        case 0x224d3cu: goto label_224d3c;
        case 0x224d44u: goto label_224d44;
        case 0x224d70u: goto label_224d70;
        case 0x224d80u: goto label_224d80;
        case 0x224d90u: goto label_224d90;
        case 0x224dacu: goto label_224dac;
        case 0x224dd0u: goto label_224dd0;
        case 0x224dd8u: goto label_224dd8;
        case 0x224df8u: goto label_224df8;
        case 0x224e50u: goto label_224e50;
        default: break;
    }

    ctx->pc = 0x224c60u;

    // 0x224c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224c64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x224c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x224c68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224c6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224c70: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x224c70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x224c74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224c78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x224c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x224c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x224c80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c84: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x224c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x224c88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c8c: 0xae60ca20  sw          $zero, -0x35E0($s3)
    ctx->pc = 0x224c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294953504), GPR_U32(ctx, 0));
    // 0x224c90: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x224C90u;
    {
        const bool branch_taken_0x224c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224C90u;
            // 0x224c94: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c90) {
            ctx->pc = 0x224CD4u;
            goto label_224cd4;
        }
    }
    ctx->pc = 0x224C98u;
    // 0x224c98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224c9c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224ca0: 0x248436a8  addiu       $a0, $a0, 0x36A8
    ctx->pc = 0x224ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13992));
    // 0x224ca4: 0x250836b8  addiu       $t0, $t0, 0x36B8
    ctx->pc = 0x224ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14008));
    // 0x224ca8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x224ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_224cac:
    // 0x224cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224cb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224cb8: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x224cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x224cbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224cc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224cc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224cc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x224cc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224cc8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x224cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ccc: 0x8089794  j           func_225E50
    ctx->pc = 0x224CCCu;
    ctx->pc = 0x224CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224CCCu;
            // 0x224cd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224CD4u;
label_224cd4:
    // 0x224cd4: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x224CD4u;
    {
        const bool branch_taken_0x224cd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x224cd4) {
            ctx->pc = 0x224CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224CD4u;
            // 0x224cd8: 0x8c890000  lw          $t1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224CF8u;
            goto label_224cf8;
        }
    }
    ctx->pc = 0x224CDCu;
    // 0x224cdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224ce0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224ce4: 0x248436a8  addiu       $a0, $a0, 0x36A8
    ctx->pc = 0x224ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13992));
    // 0x224ce8: 0x250836d0  addiu       $t0, $t0, 0x36D0
    ctx->pc = 0x224ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14032));
    // 0x224cec: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x224CECu;
    {
        const bool branch_taken_0x224cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224CECu;
            // 0x224cf0: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cec) {
            ctx->pc = 0x224CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224cac;
        }
    }
    ctx->pc = 0x224CF4u;
    // 0x224cf4: 0x0  nop
    ctx->pc = 0x224cf4u;
    // NOP
label_224cf8:
    // 0x224cf8: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x224CF8u;
    {
        const bool branch_taken_0x224cf8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224CF8u;
            // 0x224cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cf8) {
            ctx->pc = 0x224D3Cu;
            goto label_224d3c;
        }
    }
    ctx->pc = 0x224D00u;
    // 0x224d00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224d08: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224d08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224d0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224d10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224d14: 0x248436a8  addiu       $a0, $a0, 0x36A8
    ctx->pc = 0x224d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13992));
    // 0x224d18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224d18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224d1c: 0x250836f0  addiu       $t0, $t0, 0x36F0
    ctx->pc = 0x224d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14064));
    // 0x224d20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x224d20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224d24: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x224d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x224d28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x224d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d30: 0x2407d8e9  addiu       $a3, $zero, -0x2717
    ctx->pc = 0x224d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957289));
    // 0x224d34: 0x8089794  j           func_225E50
    ctx->pc = 0x224D34u;
    ctx->pc = 0x224D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224D34u;
            // 0x224d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224D3Cu;
label_224d3c:
    // 0x224d3c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x224D3Cu;
    SET_GPR_U32(ctx, 31, 0x224D44u);
    ctx->pc = 0x224D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224D3Cu;
            // 0x224d40: 0x24061078  addiu       $a2, $zero, 0x1078 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D44u; }
        if (ctx->pc != 0x224D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D44u; }
        if (ctx->pc != 0x224D44u) { return; }
    }
    ctx->pc = 0x224D44u;
label_224d44:
    // 0x224d44: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x224d44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x224d48: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x224d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x224d4c: 0xae2f1040  sw          $t7, 0x1040($s1)
    ctx->pc = 0x224d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 15));
    // 0x224d50: 0x8e0e0020  lw          $t6, 0x20($s0)
    ctx->pc = 0x224d50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x224d54: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x224d54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224d58: 0xae2e104c  sw          $t6, 0x104C($s1)
    ctx->pc = 0x224d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4172), GPR_U32(ctx, 14));
    // 0x224d5c: 0x124f0024  beq         $s2, $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x224D5Cu;
    {
        const bool branch_taken_0x224d5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        ctx->pc = 0x224D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D5Cu;
            // 0x224d60: 0xae320010  sw          $s2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d5c) {
            ctx->pc = 0x224DF0u;
            goto label_224df0;
        }
    }
    ctx->pc = 0x224D64u;
    // 0x224d64: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x224d64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224d68: 0x124f0019  beq         $s2, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x224D68u;
    {
        const bool branch_taken_0x224d68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        if (branch_taken_0x224d68) {
            ctx->pc = 0x224DD0u;
            goto label_224dd0;
        }
    }
    ctx->pc = 0x224D70u;
label_224d70:
    // 0x224d70: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x224D70u;
    {
        const bool branch_taken_0x224d70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224D70u;
            // 0x224d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d70) {
            ctx->pc = 0x224DB0u;
            goto label_224db0;
        }
    }
    ctx->pc = 0x224D78u;
    // 0x224d78: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x224D78u;
    SET_GPR_U32(ctx, 31, 0x224D80u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D80u; }
        if (ctx->pc != 0x224D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D80u; }
        if (ctx->pc != 0x224D80u) { return; }
    }
    ctx->pc = 0x224D80u;
label_224d80:
    // 0x224d80: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x224d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d88: 0xc089144  jal         func_224510
    ctx->pc = 0x224D88u;
    SET_GPR_U32(ctx, 31, 0x224D90u);
    ctx->pc = 0x224D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224D88u;
            // 0x224d8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D90u; }
        if (ctx->pc != 0x224D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D90u; }
        if (ctx->pc != 0x224D90u) { return; }
    }
    ctx->pc = 0x224D90u;
label_224d90:
    // 0x224d90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224d94: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x224d94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x224d98: 0x248436a8  addiu       $a0, $a0, 0x36A8
    ctx->pc = 0x224d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13992));
    // 0x224d9c: 0x24e73718  addiu       $a3, $a3, 0x3718
    ctx->pc = 0x224d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14104));
    // 0x224da0: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x224da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x224da4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x224DA4u;
    SET_GPR_U32(ctx, 31, 0x224DACu);
    ctx->pc = 0x224DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224DA4u;
            // 0x224da8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DACu; }
        if (ctx->pc != 0x224DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DACu; }
        if (ctx->pc != 0x224DACu) { return; }
    }
    ctx->pc = 0x224DACu;
label_224dac:
    // 0x224dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224db0:
    // 0x224db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224db8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224dbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224dc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x224dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224dc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x224dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x224DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DC8u;
            // 0x224dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224DD0u;
label_224dd0:
    // 0x224dd0: 0xc088a44  jal         func_222910
    ctx->pc = 0x224DD0u;
    SET_GPR_U32(ctx, 31, 0x224DD8u);
    ctx->pc = 0x224DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224DD0u;
            // 0x224dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222910u;
    if (runtime->hasFunction(0x222910u)) {
        auto targetFn = runtime->lookupFunction(0x222910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DD8u; }
        if (ctx->pc != 0x224DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222910_0x222910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DD8u; }
        if (ctx->pc != 0x224DD8u) { return; }
    }
    ctx->pc = 0x224DD8u;
label_224dd8:
    // 0x224dd8: 0x8e6fca20  lw          $t7, -0x35E0($s3)
    ctx->pc = 0x224dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953504)));
    // 0x224ddc: 0x11e0ffe4  beqz        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x224DDCu;
    {
        const bool branch_taken_0x224ddc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DDCu;
            // 0x224de0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ddc) {
            ctx->pc = 0x224D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224d70;
        }
    }
    ctx->pc = 0x224DE4u;
    // 0x224de4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224de4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x224de8: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x224DE8u;
    {
        const bool branch_taken_0x224de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224de8) {
            ctx->pc = 0x224D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224d70;
        }
    }
    ctx->pc = 0x224DF0u;
label_224df0:
    // 0x224df0: 0xc088f2a  jal         func_223CA8
    ctx->pc = 0x224DF0u;
    SET_GPR_U32(ctx, 31, 0x224DF8u);
    ctx->pc = 0x224DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224DF0u;
            // 0x224df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223CA8u;
    if (runtime->hasFunction(0x223CA8u)) {
        auto targetFn = runtime->lookupFunction(0x223CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DF8u; }
        if (ctx->pc != 0x224DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223CA8_0x223ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DF8u; }
        if (ctx->pc != 0x224DF8u) { return; }
    }
    ctx->pc = 0x224DF8u;
label_224df8:
    // 0x224df8: 0x8e6fca20  lw          $t7, -0x35E0($s3)
    ctx->pc = 0x224df8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953504)));
    // 0x224dfc: 0x11e0ffdc  beqz        $t7, . + 4 + (-0x24 << 2)
    ctx->pc = 0x224DFCu;
    {
        const bool branch_taken_0x224dfc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DFCu;
            // 0x224e00: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dfc) {
            ctx->pc = 0x224D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224d70;
        }
    }
    ctx->pc = 0x224E04u;
    // 0x224e04: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x224e04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224e08: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224e08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x224e0c: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x224E0Cu;
    {
        const bool branch_taken_0x224e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E0Cu;
            // 0x224e10: 0xadeeca24  sw          $t6, -0x35DC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294953508), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e0c) {
            ctx->pc = 0x224D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224d70;
        }
    }
    ctx->pc = 0x224E14u;
    // 0x224e14: 0x0  nop
    ctx->pc = 0x224e14u;
    // NOP
    // 0x224e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224e20: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x224E20u;
    {
        const bool branch_taken_0x224e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x224e20) {
            ctx->pc = 0x224E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224E20u;
            // 0x224e24: 0x9c840018  lwu         $a0, 0x18($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224E50u;
            goto label_224e50;
        }
    }
    ctx->pc = 0x224E28u;
    // 0x224e28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224e30: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224e30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224e34: 0x24843730  addiu       $a0, $a0, 0x3730
    ctx->pc = 0x224e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14128));
    // 0x224e38: 0x250836b8  addiu       $t0, $t0, 0x36B8
    ctx->pc = 0x224e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14008));
    // 0x224e3c: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x224e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x224e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e44: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x224e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x224e48: 0x8089794  j           func_225E50
    ctx->pc = 0x224E48u;
    ctx->pc = 0x224E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224E48u;
            // 0x224e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224E50u;
label_224e50:
    // 0x224e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224e54: 0x80990d8  j           func_264360
    ctx->pc = 0x224E54u;
    ctx->pc = 0x224E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224E54u;
            // 0x224e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00264360_0x264360(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224E5Cu;
    // 0x224e5c: 0x0  nop
    ctx->pc = 0x224e5cu;
    // NOP
    ctx->pc = 0x224e60u;
}
