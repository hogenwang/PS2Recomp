#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AEE90
// Address: 0x2aee90 - 0x2af478
void sub_002AEE90_0x2aee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEE90_0x2aee90");
#endif

    switch (ctx->pc) {
        case 0x2aeee8u: goto label_2aeee8;
        case 0x2aef18u: goto label_2aef18;
        case 0x2aef60u: goto label_2aef60;
        case 0x2aef98u: goto label_2aef98;
        case 0x2aefc0u: goto label_2aefc0;
        case 0x2aefd8u: goto label_2aefd8;
        case 0x2af01cu: goto label_2af01c;
        case 0x2af044u: goto label_2af044;
        case 0x2af05cu: goto label_2af05c;
        case 0x2af070u: goto label_2af070;
        case 0x2af0b4u: goto label_2af0b4;
        case 0x2af0f8u: goto label_2af0f8;
        case 0x2af130u: goto label_2af130;
        case 0x2af1a0u: goto label_2af1a0;
        case 0x2af1d8u: goto label_2af1d8;
        case 0x2af1f8u: goto label_2af1f8;
        case 0x2af22cu: goto label_2af22c;
        case 0x2af270u: goto label_2af270;
        case 0x2af294u: goto label_2af294;
        case 0x2af2bcu: goto label_2af2bc;
        case 0x2af2f0u: goto label_2af2f0;
        case 0x2af320u: goto label_2af320;
        case 0x2af344u: goto label_2af344;
        case 0x2af360u: goto label_2af360;
        case 0x2af3a4u: goto label_2af3a4;
        case 0x2af3b8u: goto label_2af3b8;
        case 0x2af3d4u: goto label_2af3d4;
        case 0x2af3f0u: goto label_2af3f0;
        case 0x2af424u: goto label_2af424;
        default: break;
    }

    ctx->pc = 0x2aee90u;

    // 0x2aee90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2aee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2aee94: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2aee94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2aee98: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2aee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2aee9c: 0x8c6275ec  lw          $v0, 0x75EC($v1)
    ctx->pc = 0x2aee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30188)));
    // 0x2aeea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aeea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeea4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2aeea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2aeea8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2aeea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2aeeac: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2aeeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2aeeb0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2aeeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2aeeb4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AEEB4u;
    {
        const bool branch_taken_0x2aeeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEEB4u;
            // 0x2aeeb8: 0xafbd0030  sw          $sp, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeeb4) {
            ctx->pc = 0x2AEF20u;
            goto label_2aef20;
        }
    }
    ctx->pc = 0x2AEEBCu;
    // 0x2aeebc: 0x3c1201c9  lui         $s2, 0x1C9
    ctx->pc = 0x2aeebcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)457 << 16));
    // 0x2aeec0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2aeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2aeec4: 0xac6075ec  sw          $zero, 0x75EC($v1)
    ctx->pc = 0x2aeec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 30188), GPR_U32(ctx, 0));
    // 0x2aeec8: 0x24426fc0  addiu       $v0, $v0, 0x6FC0
    ctx->pc = 0x2aeec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28608));
    // 0x2aeecc: 0x264349a8  addiu       $v1, $s2, 0x49A8
    ctx->pc = 0x2aeeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 18856));
    // 0x2aeed0: 0x24420550  addiu       $v0, $v0, 0x550
    ctx->pc = 0x2aeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x2aeed4: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x2aeed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x2aeed8: 0x3c13002b  lui         $s3, 0x2B
    ctx->pc = 0x2aeed8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43 << 16));
    // 0x2aeedc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2aeedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aeee0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2aeee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2aeee4: 0x0  nop
    ctx->pc = 0x2aeee4u;
    // NOP
label_2aeee8:
    // 0x2aeee8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2aeee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2aeeec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2aeeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2aeef0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2aeef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2aeef4: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x2aeef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x2aeef8: 0x0  nop
    ctx->pc = 0x2aeef8u;
    // NOP
    // 0x2aeefc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AEEFCu;
    {
        const bool branch_taken_0x2aeefc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2aeefc) {
            ctx->pc = 0x2AEEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aeee8;
        }
    }
    ctx->pc = 0x2AEF04u;
    // 0x2aef04: 0x264449a8  addiu       $a0, $s2, 0x49A8
    ctx->pc = 0x2aef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18856));
    // 0x2aef08: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2aef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2aef0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2aef0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aef10: 0xc04a168  jal         func_1285A0
    ctx->pc = 0x2AEF10u;
    SET_GPR_U32(ctx, 31, 0x2AEF18u);
    ctx->pc = 0x2AEF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF10u;
            // 0x2aef14: 0x266706d8  addiu       $a3, $s3, 0x6D8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1285A0u;
    if (runtime->hasFunction(0x1285A0u)) {
        auto targetFn = runtime->lookupFunction(0x1285A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF18u; }
        if (ctx->pc != 0x2AEF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001285A0_0x1285a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF18u; }
        if (ctx->pc != 0x2AEF18u) { return; }
    }
    ctx->pc = 0x2AEF18u;
label_2aef18:
    // 0x2aef18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEF18u;
    {
        const bool branch_taken_0x2aef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF18u;
            // 0x2aef1c: 0x92220001  lbu         $v0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef18) {
            ctx->pc = 0x2AEF30u;
            goto label_2aef30;
        }
    }
    ctx->pc = 0x2AEF20u;
label_2aef20:
    // 0x2aef20: 0x3c1201c9  lui         $s2, 0x1C9
    ctx->pc = 0x2aef20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)457 << 16));
    // 0x2aef24: 0x3c13002b  lui         $s3, 0x2B
    ctx->pc = 0x2aef24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43 << 16));
    // 0x2aef28: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2aef28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aef2c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2aef2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_2aef30:
    // 0x2aef30: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x2aef30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
    // 0x2aef34: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2aef34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aef38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef3c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2aef3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2aef40: 0x266806d8  addiu       $t0, $s3, 0x6D8
    ctx->pc = 0x2aef40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1752));
    // 0x2aef44: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2aef44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2aef48: 0x264549a8  addiu       $a1, $s2, 0x49A8
    ctx->pc = 0x2aef48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 18856));
    // 0x2aef4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2aef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2aef50: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2aef50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2aef54: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2aef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2aef58: 0xc0a6ac4  jal         func_29AB10
    ctx->pc = 0x2AEF58u;
    SET_GPR_U32(ctx, 31, 0x2AEF60u);
    ctx->pc = 0x2AEF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF58u;
            // 0x2aef5c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AB10u;
    if (runtime->hasFunction(0x29AB10u)) {
        auto targetFn = runtime->lookupFunction(0x29AB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF60u; }
        if (ctx->pc != 0x2AEF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AB10_0x29ab10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF60u; }
        if (ctx->pc != 0x2AEF60u) { return; }
    }
    ctx->pc = 0x2AEF60u;
label_2aef60:
    // 0x2aef60: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEF60u;
    {
        const bool branch_taken_0x2aef60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aef60) {
            ctx->pc = 0x2AEF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF60u;
            // 0x2aef64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AEF7Cu;
            goto label_2aef7c;
        }
    }
    ctx->pc = 0x2AEF68u;
    // 0x2aef68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2aef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aef6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2aef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aef70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AEF70u;
    {
        const bool branch_taken_0x2aef70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF70u;
            // 0x2aef74: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef70) {
            ctx->pc = 0x2AEF7Cu;
            goto label_2aef7c;
        }
    }
    ctx->pc = 0x2AEF78u;
    // 0x2aef78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aef78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aef7c:
    // 0x2aef7c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2aef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aef80: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2aef80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aef84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2aef84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aef88: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2aef88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aef8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2aef8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aef90: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF90u;
            // 0x2aef94: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEF98u;
label_2aef98:
    // 0x2aef98: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2AEF98u;
    {
        const bool branch_taken_0x2aef98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEF98u;
            // 0x2aef9c: 0x3c030300  lui         $v1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef98) {
            ctx->pc = 0x2AEFD0u;
            goto label_2aefd0;
        }
    }
    ctx->pc = 0x2AEFA0u;
    // 0x2aefa0: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x2aefa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aefa4: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x2aefa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2aefa8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2aefa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2aefac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2aefacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2aefb0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEFB0u;
    {
        const bool branch_taken_0x2aefb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AEFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEFB0u;
            // 0x2aefb4: 0x4123b  dsra        $v0, $a0, 8 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aefb0) {
            ctx->pc = 0x2AEFC0u;
            goto label_2aefc0;
        }
    }
    ctx->pc = 0x2AEFB8u;
    // 0x2aefb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEFB8u;
            // 0x2aefbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEFC0u;
label_2aefc0:
    // 0x2aefc0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2aefc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2aefc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aefc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aefc8: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x2aefc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aefcc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2aefccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2aefd0:
    // 0x2aefd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEFD0u;
            // 0x2aefd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEFD8u;
label_2aefd8:
    // 0x2aefd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2aefd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2aefdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2aefdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefe0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2aefe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2aefe4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2aefe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2aefe8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2aefe8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aefecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aeff0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2aeff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeff4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2aeff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2aeff8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2aeff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2aeffc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2aeffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2af000: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2af000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2af004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af008: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x2af008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2af00c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF00Cu;
    {
        const bool branch_taken_0x2af00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF00Cu;
            // 0x2af010: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af00c) {
            ctx->pc = 0x2AF030u;
            goto label_2af030;
        }
    }
    ctx->pc = 0x2AF014u;
    // 0x2af014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF014u;
    {
        const bool branch_taken_0x2af014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF014u;
            // 0x2af018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af014) {
            ctx->pc = 0x2AF038u;
            goto label_2af038;
        }
    }
    ctx->pc = 0x2AF01Cu;
label_2af01c:
    // 0x2af01c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2af01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2af020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af028: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2AF028u;
    {
        const bool branch_taken_0x2af028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF028u;
            // 0x2af02c: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af028) {
            ctx->pc = 0x2AF0CCu;
            goto label_2af0cc;
        }
    }
    ctx->pc = 0x2AF030u;
label_2af030:
    // 0x2af030: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x2af030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x2af034: 0x8c5000a0  lw          $s0, 0xA0($v0)
    ctx->pc = 0x2af034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_2af038:
    // 0x2af038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af03c: 0xc0ac386  jal         func_2B0E18
    ctx->pc = 0x2AF03Cu;
    SET_GPR_U32(ctx, 31, 0x2AF044u);
    ctx->pc = 0x2AF040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF03Cu;
            // 0x2af040: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0E18u;
    if (runtime->hasFunction(0x2B0E18u)) {
        auto targetFn = runtime->lookupFunction(0x2B0E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF044u; }
        if (ctx->pc != 0x2AF044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0E18_0x2b0e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF044u; }
        if (ctx->pc != 0x2AF044u) { return; }
    }
    ctx->pc = 0x2AF044u;
label_2af044:
    // 0x2af044: 0xde140018  ld          $s4, 0x18($s0)
    ctx->pc = 0x2af044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af048: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2af048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2af04c: 0xde100010  ld          $s0, 0x10($s0)
    ctx->pc = 0x2af04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2af050: 0x24a506d8  addiu       $a1, $a1, 0x6D8
    ctx->pc = 0x2af050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
    // 0x2af054: 0xc0aefd8  jal         func_2BBF60
    ctx->pc = 0x2AF054u;
    SET_GPR_U32(ctx, 31, 0x2AF05Cu);
    ctx->pc = 0x2AF058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF054u;
            // 0x2af058: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBF60u;
    if (runtime->hasFunction(0x2BBF60u)) {
        auto targetFn = runtime->lookupFunction(0x2BBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF05Cu; }
        if (ctx->pc != 0x2AF05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBF60_0x2bbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF05Cu; }
        if (ctx->pc != 0x2AF05Cu) { return; }
    }
    ctx->pc = 0x2AF05Cu;
label_2af05c:
    // 0x2af05c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2af05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af060: 0x18c0001a  blez        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AF060u;
    {
        const bool branch_taken_0x2af060 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2AF064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF060u;
            // 0x2af064: 0x3c150010  lui         $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af060) {
            ctx->pc = 0x2AF0CCu;
            goto label_2af0cc;
        }
    }
    ctx->pc = 0x2AF068u;
    // 0x2af068: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2af068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2af06c: 0x0  nop
    ctx->pc = 0x2af06cu;
    // NOP
label_2af070:
    // 0x2af070: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2af070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2af074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af078: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2af078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af07c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x2af07cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2af080: 0x304403ff  andi        $a0, $v0, 0x3FF
    ctx->pc = 0x2af080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2af084: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2af084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2af088: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF088u;
    {
        const bool branch_taken_0x2af088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF088u;
            // 0x2af08c: 0x941024  and         $v0, $a0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af088) {
            ctx->pc = 0x2AF094u;
            goto label_2af094;
        }
    }
    ctx->pc = 0x2AF090u;
    // 0x2af090: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x2af090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_2af094:
    // 0x2af094: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2af094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2af098: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2af098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2af09c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2af09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2af0a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2af0a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2af0a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF0A4u;
    {
        const bool branch_taken_0x2af0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af0a4) {
            ctx->pc = 0x2AF0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0A4u;
            // 0x2af0a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF0C0u;
            goto label_2af0c0;
        }
    }
    ctx->pc = 0x2AF0ACu;
    // 0x2af0ac: 0xc0af0a6  jal         func_2BC298
    ctx->pc = 0x2AF0ACu;
    SET_GPR_U32(ctx, 31, 0x2AF0B4u);
    ctx->pc = 0x2AF0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0ACu;
            // 0x2af0b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC298u;
    if (runtime->hasFunction(0x2BC298u)) {
        auto targetFn = runtime->lookupFunction(0x2BC298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF0B4u; }
        if (ctx->pc != 0x2AF0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC298_0x2bc298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF0B4u; }
        if (ctx->pc != 0x2AF0B4u) { return; }
    }
    ctx->pc = 0x2AF0B4u;
label_2af0b4:
    // 0x2af0b4: 0x441ffd9  bgez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2AF0B4u;
    {
        const bool branch_taken_0x2af0b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AF0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0B4u;
            // 0x2af0b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0b4) {
            ctx->pc = 0x2AF01Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2af01c;
        }
    }
    ctx->pc = 0x2AF0BCu;
    // 0x2af0bc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2af0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2af0c0:
    // 0x2af0c0: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x2af0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2af0c4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2AF0C4u;
    {
        const bool branch_taken_0x2af0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af0c4) {
            ctx->pc = 0x2AF0C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0C4u;
            // 0x2af0c8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2af070;
        }
    }
    ctx->pc = 0x2AF0CCu;
label_2af0cc:
    // 0x2af0cc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2af0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2af0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2af0d4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2af0d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2af0d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2af0d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af0dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2af0dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af0e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2af0e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af0e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2af0e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af0e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2af0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF0F0u;
            // 0x2af0f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF0F8u;
label_2af0f8:
    // 0x2af0f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2af0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2af0fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2af0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2af100: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2af100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2af104: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2af104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af10c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2af10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af110: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2af110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2af114: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2af114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af118: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2af118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2af11c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2af11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af120: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x2af120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2af124: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x2af124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x2af128: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2AF128u;
    SET_GPR_U32(ctx, 31, 0x2AF130u);
    ctx->pc = 0x2AF12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF128u;
            // 0x2af12c: 0xdc520010  ld          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (runtime->hasFunction(0x2B1898u)) {
        auto targetFn = runtime->lookupFunction(0x2B1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF130u; }
        if (ctx->pc != 0x2AF130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1898_0x2b1898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF130u; }
        if (ctx->pc != 0x2AF130u) { return; }
    }
    ctx->pc = 0x2AF130u;
label_2af130:
    // 0x2af130: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AF130u;
    {
        const bool branch_taken_0x2af130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF130u;
            // 0x2af134: 0x32420012  andi        $v0, $s2, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af130) {
            ctx->pc = 0x2AF188u;
            goto label_2af188;
        }
    }
    ctx->pc = 0x2AF138u;
    // 0x2af138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF138u;
    {
        const bool branch_taken_0x2af138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF138u;
            // 0x2af13c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af138) {
            ctx->pc = 0x2AF150u;
            goto label_2af150;
        }
    }
    ctx->pc = 0x2AF140u;
    // 0x2af140: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2af140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2af144: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2af144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2af148: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2af148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af14c: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x2af14cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_2af150:
    // 0x2af150: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2af150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af154: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x2af154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2af158: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF158u;
    {
        const bool branch_taken_0x2af158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF158u;
            // 0x2af15c: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af158) {
            ctx->pc = 0x2AF18Cu;
            goto label_2af18c;
        }
    }
    ctx->pc = 0x2AF160u;
    // 0x2af160: 0x32420016  andi        $v0, $s2, 0x16
    ctx->pc = 0x2af160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)22);
    // 0x2af164: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF164u;
    {
        const bool branch_taken_0x2af164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF164u;
            // 0x2af168: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af164) {
            ctx->pc = 0x2AF18Cu;
            goto label_2af18c;
        }
    }
    ctx->pc = 0x2AF16Cu;
    // 0x2af16c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2af16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2af170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2af174: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2af174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2af178: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2af178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2af17c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2af17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2af180: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2af180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2af184: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2af188:
    // 0x2af188: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2af188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2af18c:
    // 0x2af18c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af190: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2af190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2af194: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2af198: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2AF198u;
    SET_GPR_U32(ctx, 31, 0x2AF1A0u);
    ctx->pc = 0x2AF19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF198u;
            // 0x2af19c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (runtime->hasFunction(0x2B1898u)) {
        auto targetFn = runtime->lookupFunction(0x2B1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1A0u; }
        if (ctx->pc != 0x2AF1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1898_0x2b1898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1A0u; }
        if (ctx->pc != 0x2AF1A0u) { return; }
    }
    ctx->pc = 0x2AF1A0u;
label_2af1a0:
    // 0x2af1a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF1A0u;
    {
        const bool branch_taken_0x2af1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF1A0u;
            // 0x2af1a4: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1a0) {
            ctx->pc = 0x2AF1B4u;
            goto label_2af1b4;
        }
    }
    ctx->pc = 0x2AF1A8u;
    // 0x2af1a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2af1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af1ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2af1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2af1b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2af1b4:
    // 0x2af1b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2af1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2af1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af1bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2af1bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af1c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2af1c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af1c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2af1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af1c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF1CCu;
            // 0x2af1d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF1D4u;
    // 0x2af1d4: 0x0  nop
    ctx->pc = 0x2af1d4u;
    // NOP
label_2af1d8:
    // 0x2af1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af1dc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2af1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2af1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af1e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2af1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2af1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2af1f0: 0xc0ac0ea  jal         func_2B03A8
    ctx->pc = 0x2AF1F0u;
    SET_GPR_U32(ctx, 31, 0x2AF1F8u);
    ctx->pc = 0x2AF1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF1F0u;
            // 0x2af1f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B03A8u;
    if (runtime->hasFunction(0x2B03A8u)) {
        auto targetFn = runtime->lookupFunction(0x2B03A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1F8u; }
        if (ctx->pc != 0x2AF1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B03A8_0x2b03a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF1F8u; }
        if (ctx->pc != 0x2AF1F8u) { return; }
    }
    ctx->pc = 0x2AF1F8u;
label_2af1f8:
    // 0x2af1f8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2af1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2af1fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2af1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2af200: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF200u;
    {
        const bool branch_taken_0x2af200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF200u;
            // 0x2af204: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af200) {
            ctx->pc = 0x2AF23Cu;
            goto label_2af23c;
        }
    }
    ctx->pc = 0x2AF208u;
    // 0x2af208: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2af208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2af20c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2af20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2af210: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF210u;
    {
        const bool branch_taken_0x2af210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af210) {
            ctx->pc = 0x2AF214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF210u;
            // 0x2af214: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF24Cu;
            goto label_2af24c;
        }
    }
    ctx->pc = 0x2AF218u;
    // 0x2af218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af21c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2af21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2af220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af224: 0xc0ac0ea  jal         func_2B03A8
    ctx->pc = 0x2AF224u;
    SET_GPR_U32(ctx, 31, 0x2AF22Cu);
    ctx->pc = 0x2AF228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF224u;
            // 0x2af228: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B03A8u;
    if (runtime->hasFunction(0x2B03A8u)) {
        auto targetFn = runtime->lookupFunction(0x2B03A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF22Cu; }
        if (ctx->pc != 0x2AF22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B03A8_0x2b03a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF22Cu; }
        if (ctx->pc != 0x2AF22Cu) { return; }
    }
    ctx->pc = 0x2AF22Cu;
label_2af22c:
    // 0x2af22c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2af22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2af230: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2af230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2af234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF234u;
    {
        const bool branch_taken_0x2af234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF234u;
            // 0x2af238: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af234) {
            ctx->pc = 0x2AF248u;
            goto label_2af248;
        }
    }
    ctx->pc = 0x2AF23Cu;
label_2af23c:
    // 0x2af23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af240: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2AF240u;
    {
        const bool branch_taken_0x2af240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF240u;
            // 0x2af244: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af240) {
            ctx->pc = 0x2AF310u;
            goto label_2af310;
        }
    }
    ctx->pc = 0x2AF248u;
label_2af248:
    // 0x2af248: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2af248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2af24c:
    // 0x2af24c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2af24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2af250: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF250u;
    {
        const bool branch_taken_0x2af250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af250) {
            ctx->pc = 0x2AF254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF250u;
            // 0x2af254: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF280u;
            goto label_2af280;
        }
    }
    ctx->pc = 0x2AF258u;
    // 0x2af258: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2af258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2af25c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af264: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2af264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2af268: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2AF268u;
    SET_GPR_U32(ctx, 31, 0x2AF270u);
    ctx->pc = 0x2AF26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF268u;
            // 0x2af26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF270u; }
        if (ctx->pc != 0x2AF270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF270u; }
        if (ctx->pc != 0x2AF270u) { return; }
    }
    ctx->pc = 0x2AF270u;
label_2af270:
    // 0x2af270: 0x5c40000b  bgtzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF270u;
    {
        const bool branch_taken_0x2af270 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2af270) {
            ctx->pc = 0x2AF274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF270u;
            // 0x2af274: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF2A0u;
            goto label_2af2a0;
        }
    }
    ctx->pc = 0x2AF278u;
    // 0x2af278: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2AF278u;
    {
        const bool branch_taken_0x2af278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF278u;
            // 0x2af27c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af278) {
            ctx->pc = 0x2AF314u;
            goto label_2af314;
        }
    }
    ctx->pc = 0x2AF280u;
label_2af280:
    // 0x2af280: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x2af280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x2af284: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF284u;
    {
        const bool branch_taken_0x2af284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF284u;
            // 0x2af288: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af284) {
            ctx->pc = 0x2AF2A4u;
            goto label_2af2a4;
        }
    }
    ctx->pc = 0x2AF28Cu;
    // 0x2af28c: 0xc0adbaa  jal         func_2B6EA8
    ctx->pc = 0x2AF28Cu;
    SET_GPR_U32(ctx, 31, 0x2AF294u);
    ctx->pc = 0x2AF290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF28Cu;
            // 0x2af290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6EA8u;
    if (runtime->hasFunction(0x2B6EA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF294u; }
        if (ctx->pc != 0x2AF294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6EA8_0x2b6ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF294u; }
        if (ctx->pc != 0x2AF294u) { return; }
    }
    ctx->pc = 0x2AF294u;
label_2af294:
    // 0x2af294: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2AF294u;
    {
        const bool branch_taken_0x2af294 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AF298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF294u;
            // 0x2af298: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af294) {
            ctx->pc = 0x2AF314u;
            goto label_2af314;
        }
    }
    ctx->pc = 0x2AF29Cu;
    // 0x2af29c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2af29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2af2a0:
    // 0x2af2a0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2af2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2af2a4:
    // 0x2af2a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AF2A4u;
    {
        const bool branch_taken_0x2af2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2A4u;
            // 0x2af2a8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2a4) {
            ctx->pc = 0x2AF2D0u;
            goto label_2af2d0;
        }
    }
    ctx->pc = 0x2AF2ACu;
    // 0x2af2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2b4: 0xc0ac0ea  jal         func_2B03A8
    ctx->pc = 0x2AF2B4u;
    SET_GPR_U32(ctx, 31, 0x2AF2BCu);
    ctx->pc = 0x2AF2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2B4u;
            // 0x2af2b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B03A8u;
    if (runtime->hasFunction(0x2B03A8u)) {
        auto targetFn = runtime->lookupFunction(0x2B03A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF2BCu; }
        if (ctx->pc != 0x2AF2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B03A8_0x2b03a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF2BCu; }
        if (ctx->pc != 0x2AF2BCu) { return; }
    }
    ctx->pc = 0x2AF2BCu;
label_2af2bc:
    // 0x2af2bc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2af2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2af2c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2af2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2af2c4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AF2C4u;
    {
        const bool branch_taken_0x2af2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2C4u;
            // 0x2af2c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2c4) {
            ctx->pc = 0x2AF310u;
            goto label_2af310;
        }
    }
    ctx->pc = 0x2AF2CCu;
    // 0x2af2cc: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2af2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2af2d0:
    // 0x2af2d0: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2af2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2af2d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF2D4u;
    {
        const bool branch_taken_0x2af2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2D4u;
            // 0x2af2d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2d4) {
            ctx->pc = 0x2AF2FCu;
            goto label_2af2fc;
        }
    }
    ctx->pc = 0x2AF2DCu;
    // 0x2af2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2e8: 0xc0ad948  jal         func_2B6520
    ctx->pc = 0x2AF2E8u;
    SET_GPR_U32(ctx, 31, 0x2AF2F0u);
    ctx->pc = 0x2AF2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2E8u;
            // 0x2af2ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6520u;
    if (runtime->hasFunction(0x2B6520u)) {
        auto targetFn = runtime->lookupFunction(0x2B6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF2F0u; }
        if (ctx->pc != 0x2AF2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6520_0x2b6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF2F0u; }
        if (ctx->pc != 0x2AF2F0u) { return; }
    }
    ctx->pc = 0x2AF2F0u;
label_2af2f0:
    // 0x2af2f0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF2F0u;
    {
        const bool branch_taken_0x2af2f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AF2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2F0u;
            // 0x2af2f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2f0) {
            ctx->pc = 0x2AF310u;
            goto label_2af310;
        }
    }
    ctx->pc = 0x2AF2F8u;
    // 0x2af2f8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2af2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2af2fc:
    // 0x2af2fc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF2FCu;
    {
        const bool branch_taken_0x2af2fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AF300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF2FCu;
            // 0x2af300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af2fc) {
            ctx->pc = 0x2AF310u;
            goto label_2af310;
        }
    }
    ctx->pc = 0x2AF304u;
    // 0x2af304: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2af304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af308: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2af308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x2af30c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2af30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2af310:
    // 0x2af310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2af314:
    // 0x2af314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af318: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF318u;
            // 0x2af31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF320u;
label_2af320:
    // 0x2af320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2af320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2af324: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2af324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2af328: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2af328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2af32c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2af32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af334: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2af334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2af338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2af33c: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x2AF33Cu;
    SET_GPR_U32(ctx, 31, 0x2AF344u);
    ctx->pc = 0x2AF340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF33Cu;
            // 0x2af340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF344u; }
        if (ctx->pc != 0x2AF344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF344u; }
        if (ctx->pc != 0x2AF344u) { return; }
    }
    ctx->pc = 0x2AF344u;
label_2af344:
    // 0x2af344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2af344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2af348: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2af348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af34c: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x2af34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2af350: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF350u;
    {
        const bool branch_taken_0x2af350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af350) {
            ctx->pc = 0x2AF354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF350u;
            // 0x2af354: 0xdc820000  ld          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF368u;
            goto label_2af368;
        }
    }
    ctx->pc = 0x2AF358u;
    // 0x2af358: 0xc0abd9e  jal         func_2AF678
    ctx->pc = 0x2AF358u;
    SET_GPR_U32(ctx, 31, 0x2AF360u);
    ctx->pc = 0x2AF35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF358u;
            // 0x2af35c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AF678u;
    if (runtime->hasFunction(0x2AF678u)) {
        auto targetFn = runtime->lookupFunction(0x2AF678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF360u; }
        if (ctx->pc != 0x2AF360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF678_0x2af678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF360u; }
        if (ctx->pc != 0x2AF360u) { return; }
    }
    ctx->pc = 0x2AF360u;
label_2af360:
    // 0x2af360: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2af360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af364: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2af364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2af368:
    // 0x2af368: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2af368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2af36c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2AF36Cu;
    {
        const bool branch_taken_0x2af36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF36Cu;
            // 0x2af370: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af36c) {
            ctx->pc = 0x2AF414u;
            goto label_2af414;
        }
    }
    ctx->pc = 0x2AF374u;
    // 0x2af374: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2af374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2af378: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2af378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2af37c: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AF37Cu;
    {
        const bool branch_taken_0x2af37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF37Cu;
            // 0x2af380: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af37c) {
            ctx->pc = 0x2AF418u;
            goto label_2af418;
        }
    }
    ctx->pc = 0x2AF384u;
    // 0x2af384: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2af384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2af388: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF388u;
    {
        const bool branch_taken_0x2af388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF388u;
            // 0x2af38c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af388) {
            ctx->pc = 0x2AF3BCu;
            goto label_2af3bc;
        }
    }
    ctx->pc = 0x2AF390u;
    // 0x2af390: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2af390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af394: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2af394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af39c: 0xc0ad81a  jal         func_2B6068
    ctx->pc = 0x2AF39Cu;
    SET_GPR_U32(ctx, 31, 0x2AF3A4u);
    ctx->pc = 0x2AF3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF39Cu;
            // 0x2af3a0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6068u;
    if (runtime->hasFunction(0x2B6068u)) {
        auto targetFn = runtime->lookupFunction(0x2B6068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3A4u; }
        if (ctx->pc != 0x2AF3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6068_0x2b6068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3A4u; }
        if (ctx->pc != 0x2AF3A4u) { return; }
    }
    ctx->pc = 0x2AF3A4u;
label_2af3a4:
    // 0x2af3a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af3a8: 0x18a0002e  blez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2AF3A8u;
    {
        const bool branch_taken_0x2af3a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2AF3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF3A8u;
            // 0x2af3ac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3a8) {
            ctx->pc = 0x2AF464u;
            goto label_2af464;
        }
    }
    ctx->pc = 0x2AF3B0u;
    // 0x2af3b0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2af3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af3b4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2af3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_2af3b8:
    // 0x2af3b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2af3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2af3bc:
    // 0x2af3bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2af3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2af3c0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2af3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2af3c4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2af3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2af3c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af3cc: 0xc0a1558  jal         func_285560
    ctx->pc = 0x2AF3CCu;
    SET_GPR_U32(ctx, 31, 0x2AF3D4u);
    ctx->pc = 0x2AF3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF3CCu;
            // 0x2af3d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3D4u; }
        if (ctx->pc != 0x2AF3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3D4u; }
        if (ctx->pc != 0x2AF3D4u) { return; }
    }
    ctx->pc = 0x2AF3D4u;
label_2af3d4:
    // 0x2af3d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2af3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2af3d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2af3d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2af3dc: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AF3DCu;
    {
        const bool branch_taken_0x2af3dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AF3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF3DCu;
            // 0x2af3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3dc) {
            ctx->pc = 0x2AF460u;
            goto label_2af460;
        }
    }
    ctx->pc = 0x2AF3E4u;
    // 0x2af3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af3e8: 0xc0ac5d2  jal         func_2B1748
    ctx->pc = 0x2AF3E8u;
    SET_GPR_U32(ctx, 31, 0x2AF3F0u);
    ctx->pc = 0x2AF3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF3E8u;
            // 0x2af3ec: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1748u;
    if (runtime->hasFunction(0x2B1748u)) {
        auto targetFn = runtime->lookupFunction(0x2B1748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3F0u; }
        if (ctx->pc != 0x2AF3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1748_0x2b1748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF3F0u; }
        if (ctx->pc != 0x2AF3F0u) { return; }
    }
    ctx->pc = 0x2AF3F0u;
label_2af3f0:
    // 0x2af3f0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2af3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af3f4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2af3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2af3f8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2af3f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af3fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2af3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2af400: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2af400u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2af404: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2af404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af408: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2af408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2af40c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2AF40Cu;
    {
        const bool branch_taken_0x2af40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF40Cu;
            // 0x2af410: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af40c) {
            ctx->pc = 0x2AF45Cu;
            goto label_2af45c;
        }
    }
    ctx->pc = 0x2AF414u;
label_2af414:
    // 0x2af414: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2af414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2af418:
    // 0x2af418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af41c: 0xc0ad81a  jal         func_2B6068
    ctx->pc = 0x2AF41Cu;
    SET_GPR_U32(ctx, 31, 0x2AF424u);
    ctx->pc = 0x2AF420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF41Cu;
            // 0x2af420: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6068u;
    if (runtime->hasFunction(0x2B6068u)) {
        auto targetFn = runtime->lookupFunction(0x2B6068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF424u; }
        if (ctx->pc != 0x2AF424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6068_0x2b6068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF424u; }
        if (ctx->pc != 0x2AF424u) { return; }
    }
    ctx->pc = 0x2AF424u;
label_2af424:
    // 0x2af424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af428: 0x58a0000e  blezl       $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF428u;
    {
        const bool branch_taken_0x2af428 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2af428) {
            ctx->pc = 0x2AF42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF428u;
            // 0x2af42c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF464u;
            goto label_2af464;
        }
    }
    ctx->pc = 0x2AF430u;
    // 0x2af430: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2af430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af434: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2af434u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af438: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2af438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2af43c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF43Cu;
    {
        const bool branch_taken_0x2af43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF43Cu;
            // 0x2af440: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af43c) {
            ctx->pc = 0x2AF460u;
            goto label_2af460;
        }
    }
    ctx->pc = 0x2AF444u;
    // 0x2af444: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2af444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2af448: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2af448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2af44c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF44Cu;
    {
        const bool branch_taken_0x2af44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF44Cu;
            // 0x2af450: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af44c) {
            ctx->pc = 0x2AF460u;
            goto label_2af460;
        }
    }
    ctx->pc = 0x2AF454u;
    // 0x2af454: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x2AF454u;
    {
        const bool branch_taken_0x2af454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF454u;
            // 0x2af458: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af454) {
            ctx->pc = 0x2AF3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2af3b8;
        }
    }
    ctx->pc = 0x2AF45Cu;
label_2af45c:
    // 0x2af45c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2af45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2af460:
    // 0x2af460: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2af460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2af464:
    // 0x2af464: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2af464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af468: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2af468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af470: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF470u;
            // 0x2af474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF478u;
    ctx->pc = 0x2af478u;
}
