#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176DB0
// Address: 0x176db0 - 0x1770c0
void sub_00176DB0_0x176db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176DB0_0x176db0");
#endif

    switch (ctx->pc) {
        case 0x176e38u: goto label_176e38;
        case 0x176e48u: goto label_176e48;
        case 0x176e58u: goto label_176e58;
        case 0x176eacu: goto label_176eac;
        case 0x176f68u: goto label_176f68;
        case 0x176f70u: goto label_176f70;
        case 0x176f7cu: goto label_176f7c;
        case 0x176fa4u: goto label_176fa4;
        case 0x176fc4u: goto label_176fc4;
        case 0x176fccu: goto label_176fcc;
        case 0x176fe8u: goto label_176fe8;
        case 0x176ff0u: goto label_176ff0;
        case 0x177004u: goto label_177004;
        case 0x177014u: goto label_177014;
        case 0x177040u: goto label_177040;
        case 0x177054u: goto label_177054;
        case 0x177068u: goto label_177068;
        case 0x177078u: goto label_177078;
        case 0x177084u: goto label_177084;
        case 0x177090u: goto label_177090;
        default: break;
    }

    ctx->pc = 0x176db0u;

    // 0x176db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x176db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x176db4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x176db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x176db8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x176db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x176dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x176dc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176dc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x176dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176dd0: 0x909300bc  lbu         $s3, 0xBC($a0)
    ctx->pc = 0x176dd0u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x176dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176dd8: 0x9064b285  lbu         $a0, -0x4D7B($v1)
    ctx->pc = 0x176dd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947461)));
    // 0x176ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176de0: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x176DE0u;
    {
        const bool branch_taken_0x176de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x176DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DE0u;
            // 0x176de4: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176de0) {
            ctx->pc = 0x176E2Cu;
            goto label_176e2c;
        }
    }
    ctx->pc = 0x176DE8u;
    // 0x176de8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x176de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x176dec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x176decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x176df0: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x176df0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x176df4: 0x5064000e  beql        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x176DF4u;
    {
        const bool branch_taken_0x176df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x176df4) {
            ctx->pc = 0x176DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176DF4u;
            // 0x176df8: 0x326400ff  andi        $a0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x176E30u;
            goto label_176e30;
        }
    }
    ctx->pc = 0x176DFCu;
    // 0x176dfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x176dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x176e00: 0x526300a6  beql        $s3, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x176E00u;
    {
        const bool branch_taken_0x176e00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x176e00) {
            ctx->pc = 0x176E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176E00u;
            // 0x176e04: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17709Cu;
            goto label_17709c;
        }
    }
    ctx->pc = 0x176E08u;
    // 0x176e08: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x176e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x176e0c: 0x126300a2  beq         $s3, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x176E0Cu;
    {
        const bool branch_taken_0x176e0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x176e0c) {
            ctx->pc = 0x177098u;
            goto label_177098;
        }
    }
    ctx->pc = 0x176E14u;
    // 0x176e14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x176e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176e18: 0x1263009f  beq         $s3, $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x176E18u;
    {
        const bool branch_taken_0x176e18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x176e18) {
            ctx->pc = 0x177098u;
            goto label_177098;
        }
    }
    ctx->pc = 0x176E20u;
    // 0x176e20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x176e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176e24: 0x1263009c  beq         $s3, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x176E24u;
    {
        const bool branch_taken_0x176e24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x176e24) {
            ctx->pc = 0x177098u;
            goto label_177098;
        }
    }
    ctx->pc = 0x176E2Cu;
label_176e2c:
    // 0x176e2c: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x176e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_176e30:
    // 0x176e30: 0xc05da7c  jal         func_1769F0
    ctx->pc = 0x176E30u;
    SET_GPR_U32(ctx, 31, 0x176E38u);
    ctx->pc = 0x1769F0u;
    if (runtime->hasFunction(0x1769F0u)) {
        auto targetFn = runtime->lookupFunction(0x1769F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E38u; }
        if (ctx->pc != 0x176E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769F0_0x1769f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E38u; }
        if (ctx->pc != 0x176E38u) { return; }
    }
    ctx->pc = 0x176E38u;
label_176e38:
    // 0x176e38: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x176E38u;
    {
        const bool branch_taken_0x176e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e38) {
            ctx->pc = 0x176EA0u;
            goto label_176ea0;
        }
    }
    ctx->pc = 0x176E40u;
    // 0x176e40: 0xc05e94c  jal         func_17A530
    ctx->pc = 0x176E40u;
    SET_GPR_U32(ctx, 31, 0x176E48u);
    ctx->pc = 0x176E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E40u;
            // 0x176e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A530u;
    if (runtime->hasFunction(0x17A530u)) {
        auto targetFn = runtime->lookupFunction(0x17A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E48u; }
        if (ctx->pc != 0x176E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A530_0x17a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E48u; }
        if (ctx->pc != 0x176E48u) { return; }
    }
    ctx->pc = 0x176E48u;
label_176e48:
    // 0x176e48: 0x921100bd  lbu         $s1, 0xBD($s0)
    ctx->pc = 0x176e48u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 189)));
    // 0x176e4c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x176e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e54: 0x2484e300  addiu       $a0, $a0, -0x1D00
    ctx->pc = 0x176e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959872));
label_176e58:
    // 0x176e58: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x176e58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x176e5c: 0x5663000b  bnel        $s3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x176E5Cu;
    {
        const bool branch_taken_0x176e5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x176e5c) {
            ctx->pc = 0x176E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176E5Cu;
            // 0x176e60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176E8Cu;
            goto label_176e8c;
        }
    }
    ctx->pc = 0x176E64u;
    // 0x176e64: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x176e64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x176e68: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x176E68u;
    {
        const bool branch_taken_0x176e68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x176e68) {
            ctx->pc = 0x176E88u;
            goto label_176e88;
        }
    }
    ctx->pc = 0x176E70u;
    // 0x176e70: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x176e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x176e74: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x176e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x176e78: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x176e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
    // 0x176e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176e80: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x176E80u;
    {
        const bool branch_taken_0x176e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E80u;
            // 0x176e84: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e80) {
            ctx->pc = 0x176F40u;
            goto label_176f40;
        }
    }
    ctx->pc = 0x176E88u;
label_176e88:
    // 0x176e88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x176e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_176e8c:
    // 0x176e8c: 0x2ca3006b  sltiu       $v1, $a1, 0x6B
    ctx->pc = 0x176e8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)107) ? 1 : 0);
    // 0x176e90: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x176E90u;
    {
        const bool branch_taken_0x176e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E90u;
            // 0x176e94: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e90) {
            ctx->pc = 0x176E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176e58;
        }
    }
    ctx->pc = 0x176E98u;
    // 0x176e98: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x176E98u;
    {
        const bool branch_taken_0x176e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e98) {
            ctx->pc = 0x176F40u;
            goto label_176f40;
        }
    }
    ctx->pc = 0x176EA0u;
label_176ea0:
    // 0x176ea0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x176ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x176ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ea8: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x176ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
label_176eac:
    // 0x176eac: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x176eacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x176eb0: 0x5663001f  bnel        $s3, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x176EB0u;
    {
        const bool branch_taken_0x176eb0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x176eb0) {
            ctx->pc = 0x176EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176EB0u;
            // 0x176eb4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176F30u;
            goto label_176f30;
        }
    }
    ctx->pc = 0x176EB8u;
    // 0x176eb8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x176eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x176ebc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x176ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x176ec0: 0x2463e304  addiu       $v1, $v1, -0x1CFC
    ctx->pc = 0x176ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959876));
    // 0x176ec4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x176ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x176ec8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x176ec8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176ecc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x176eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x176ed0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x176ED0u;
    {
        const bool branch_taken_0x176ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176ed0) {
            ctx->pc = 0x176F18u;
            goto label_176f18;
        }
    }
    ctx->pc = 0x176ED8u;
    // 0x176ed8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x176ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x176edc: 0x9063f35f  lbu         $v1, -0xCA1($v1)
    ctx->pc = 0x176edcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964063)));
    // 0x176ee0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176EE0u;
    {
        const bool branch_taken_0x176ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176ee0) {
            ctx->pc = 0x176EF0u;
            goto label_176ef0;
        }
    }
    ctx->pc = 0x176EE8u;
    // 0x176ee8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x176EE8u;
    {
        const bool branch_taken_0x176ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176ee8) {
            ctx->pc = 0x176F04u;
            goto label_176f04;
        }
    }
    ctx->pc = 0x176EF0u;
label_176ef0:
    // 0x176ef0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x176ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x176ef4: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x176ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
    // 0x176ef8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x176ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x176efc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x176EFCu;
    {
        const bool branch_taken_0x176efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176EFCu;
            // 0x176f00: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176efc) {
            ctx->pc = 0x176F40u;
            goto label_176f40;
        }
    }
    ctx->pc = 0x176F04u;
label_176f04:
    // 0x176f04: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x176f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x176f08: 0x2463e308  addiu       $v1, $v1, -0x1CF8
    ctx->pc = 0x176f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959880));
    // 0x176f0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x176f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x176f10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x176F10u;
    {
        const bool branch_taken_0x176f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F10u;
            // 0x176f14: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f10) {
            ctx->pc = 0x176F40u;
            goto label_176f40;
        }
    }
    ctx->pc = 0x176F18u;
label_176f18:
    // 0x176f18: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x176f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x176f1c: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x176f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
    // 0x176f20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x176f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x176f24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x176F24u;
    {
        const bool branch_taken_0x176f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F24u;
            // 0x176f28: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f24) {
            ctx->pc = 0x176F40u;
            goto label_176f40;
        }
    }
    ctx->pc = 0x176F2Cu;
    // 0x176f2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x176f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_176f30:
    // 0x176f30: 0x2c83006b  sltiu       $v1, $a0, 0x6B
    ctx->pc = 0x176f30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)107) ? 1 : 0);
    // 0x176f34: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x176F34u;
    {
        const bool branch_taken_0x176f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F34u;
            // 0x176f38: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f34) {
            ctx->pc = 0x176EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176eac;
        }
    }
    ctx->pc = 0x176F3Cu;
    // 0x176f3c: 0x0  nop
    ctx->pc = 0x176f3cu;
    // NOP
label_176f40:
    // 0x176f40: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x176F40u;
    {
        const bool branch_taken_0x176f40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x176f40) {
            ctx->pc = 0x176F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176F40u;
            // 0x176f44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176F60u;
            goto label_176f60;
        }
    }
    ctx->pc = 0x176F48u;
    // 0x176f48: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176f4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176f50: 0xac80af68  sw          $zero, -0x5098($a0)
    ctx->pc = 0x176f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294946664), GPR_U32(ctx, 0));
    // 0x176f54: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x176F54u;
    {
        const bool branch_taken_0x176f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F54u;
            // 0x176f58: 0xac60a7a8  sw          $zero, -0x5858($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f54) {
            ctx->pc = 0x177098u;
            goto label_177098;
        }
    }
    ctx->pc = 0x176F5Cu;
    // 0x176f5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x176f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_176f60:
    // 0x176f60: 0xc0d0a00  jal         func_342800
    ctx->pc = 0x176F60u;
    SET_GPR_U32(ctx, 31, 0x176F68u);
    ctx->pc = 0x176F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F60u;
            // 0x176f64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342800u;
    if (runtime->hasFunction(0x342800u)) {
        auto targetFn = runtime->lookupFunction(0x342800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F68u; }
        if (ctx->pc != 0x176F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342800_0x342800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F68u; }
        if (ctx->pc != 0x176F68u) { return; }
    }
    ctx->pc = 0x176F68u;
label_176f68:
    // 0x176f68: 0xc0cb488  jal         func_32D220
    ctx->pc = 0x176F68u;
    SET_GPR_U32(ctx, 31, 0x176F70u);
    ctx->pc = 0x32D220u;
    if (runtime->hasFunction(0x32D220u)) {
        auto targetFn = runtime->lookupFunction(0x32D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F70u; }
        if (ctx->pc != 0x176F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032D220_0x32d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F70u; }
        if (ctx->pc != 0x176F70u) { return; }
    }
    ctx->pc = 0x176F70u;
label_176f70:
    // 0x176f70: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x176f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x176f74: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x176F74u;
    SET_GPR_U32(ctx, 31, 0x176F7Cu);
    ctx->pc = 0x176F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F74u;
            // 0x176f78: 0x2484e670  addiu       $a0, $a0, -0x1990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F7Cu; }
        if (ctx->pc != 0x176F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F7Cu; }
        if (ctx->pc != 0x176F7Cu) { return; }
    }
    ctx->pc = 0x176F7Cu;
label_176f7c:
    // 0x176f7c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x176f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x176f80: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x176f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x176f84: 0x2442d7f0  addiu       $v0, $v0, -0x2810
    ctx->pc = 0x176f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957040));
    // 0x176f88: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x176f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176f8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x176f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176f90: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x176f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x176f94: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x176f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x176f98: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x176f98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x176f9c: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x176F9Cu;
    SET_GPR_U32(ctx, 31, 0x176FA4u);
    ctx->pc = 0x176FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F9Cu;
            // 0x176fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FA4u; }
        if (ctx->pc != 0x176FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FA4u; }
        if (ctx->pc != 0x176FA4u) { return; }
    }
    ctx->pc = 0x176FA4u;
label_176fa4:
    // 0x176fa4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fac: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x176FACu;
    {
        const bool branch_taken_0x176fac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176FACu;
            // 0x176fb0: 0xac62a780  sw          $v0, -0x5880($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fac) {
            ctx->pc = 0x177098u;
            goto label_177098;
        }
    }
    ctx->pc = 0x176FB4u;
    // 0x176fb4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176fb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fbc: 0xc06944c  jal         func_1A5130
    ctx->pc = 0x176FBCu;
    SET_GPR_U32(ctx, 31, 0x176FC4u);
    ctx->pc = 0x176FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FBCu;
            // 0x176fc0: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5130u;
    if (runtime->hasFunction(0x1A5130u)) {
        auto targetFn = runtime->lookupFunction(0x1A5130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FC4u; }
        if (ctx->pc != 0x176FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5130_0x1a5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FC4u; }
        if (ctx->pc != 0x176FC4u) { return; }
    }
    ctx->pc = 0x176FC4u;
label_176fc4:
    // 0x176fc4: 0xc05da88  jal         func_176A20
    ctx->pc = 0x176FC4u;
    SET_GPR_U32(ctx, 31, 0x176FCCu);
    ctx->pc = 0x176FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FC4u;
            // 0x176fc8: 0x326400ff  andi        $a0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x176A20u;
    if (runtime->hasFunction(0x176A20u)) {
        auto targetFn = runtime->lookupFunction(0x176A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FCCu; }
        if (ctx->pc != 0x176FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176A20_0x176a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FCCu; }
        if (ctx->pc != 0x176FCCu) { return; }
    }
    ctx->pc = 0x176FCCu;
label_176fcc:
    // 0x176fcc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x176FCCu;
    {
        const bool branch_taken_0x176fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176fcc) {
            ctx->pc = 0x177004u;
            goto label_177004;
        }
    }
    ctx->pc = 0x176FD4u;
    // 0x176fd4: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x176fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
    // 0x176fd8: 0x13263c  dsll32      $a0, $s3, 24
    ctx->pc = 0x176fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 24));
    // 0x176fdc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x176fdcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x176fe0: 0xc05e11c  jal         func_178470
    ctx->pc = 0x176FE0u;
    SET_GPR_U32(ctx, 31, 0x176FE8u);
    ctx->pc = 0x176FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FE0u;
            // 0x176fe4: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178470u;
    if (runtime->hasFunction(0x178470u)) {
        auto targetFn = runtime->lookupFunction(0x178470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FE8u; }
        if (ctx->pc != 0x176FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178470_0x178470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FE8u; }
        if (ctx->pc != 0x176FE8u) { return; }
    }
    ctx->pc = 0x176FE8u;
label_176fe8:
    // 0x176fe8: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x176FE8u;
    SET_GPR_U32(ctx, 31, 0x176FF0u);
    ctx->pc = 0x176FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FE8u;
            // 0x176fec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FF0u; }
        if (ctx->pc != 0x176FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FF0u; }
        if (ctx->pc != 0x176FF0u) { return; }
    }
    ctx->pc = 0x176FF0u;
label_176ff0:
    // 0x176ff0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x176ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x176ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ff8: 0x2484d858  addiu       $a0, $a0, -0x27A8
    ctx->pc = 0x176ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957144));
    // 0x176ffc: 0xc0635bc  jal         func_18D6F0
    ctx->pc = 0x176FFCu;
    SET_GPR_U32(ctx, 31, 0x177004u);
    ctx->pc = 0x177000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FFCu;
            // 0x177000: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D6F0u;
    if (runtime->hasFunction(0x18D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x18D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177004u; }
        if (ctx->pc != 0x177004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D6F0_0x18d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177004u; }
        if (ctx->pc != 0x177004u) { return; }
    }
    ctx->pc = 0x177004u;
label_177004:
    // 0x177004: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17700c: 0xc06949c  jal         func_1A5270
    ctx->pc = 0x17700Cu;
    SET_GPR_U32(ctx, 31, 0x177014u);
    ctx->pc = 0x177010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17700Cu;
            // 0x177010: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5270u;
    if (runtime->hasFunction(0x1A5270u)) {
        auto targetFn = runtime->lookupFunction(0x1A5270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177014u; }
        if (ctx->pc != 0x177014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5270_0x1a5270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177014u; }
        if (ctx->pc != 0x177014u) { return; }
    }
    ctx->pc = 0x177014u;
label_177014:
    // 0x177014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177018: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x177018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x17701c: 0x2442e658  addiu       $v0, $v0, -0x19A8
    ctx->pc = 0x17701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960728));
    // 0x177020: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x177020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x177024: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x177024u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177028: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x177028u;
    {
        const bool branch_taken_0x177028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177028) {
            ctx->pc = 0x17702Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177028u;
            // 0x17702c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17704Cu;
            goto label_17704c;
        }
    }
    ctx->pc = 0x177030u;
    // 0x177030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177034: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x177034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177038: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x177038u;
    SET_GPR_U32(ctx, 31, 0x177040u);
    ctx->pc = 0x17703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177038u;
            // 0x17703c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (runtime->hasFunction(0x1A3F30u)) {
        auto targetFn = runtime->lookupFunction(0x1A3F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177040u; }
        if (ctx->pc != 0x177040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3F30_0x1a3f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177040u; }
        if (ctx->pc != 0x177040u) { return; }
    }
    ctx->pc = 0x177040u;
label_177040:
    // 0x177040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177040u;
    {
        const bool branch_taken_0x177040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177040) {
            ctx->pc = 0x177054u;
            goto label_177054;
        }
    }
    ctx->pc = 0x177048u;
    // 0x177048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17704c:
    // 0x17704c: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x17704Cu;
    SET_GPR_U32(ctx, 31, 0x177054u);
    ctx->pc = 0x177050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17704Cu;
            // 0x177050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (runtime->hasFunction(0x1A3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177054u; }
        if (ctx->pc != 0x177054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3DB0_0x1a3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177054u; }
        if (ctx->pc != 0x177054u) { return; }
    }
    ctx->pc = 0x177054u;
label_177054:
    // 0x177054: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177058: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17705c: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x17705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x177060: 0xc06953c  jal         func_1A54F0
    ctx->pc = 0x177060u;
    SET_GPR_U32(ctx, 31, 0x177068u);
    ctx->pc = 0x177064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177060u;
            // 0x177064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A54F0u;
    if (runtime->hasFunction(0x1A54F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A54F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177068u; }
        if (ctx->pc != 0x177068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A54F0_0x1a54f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177068u; }
        if (ctx->pc != 0x177068u) { return; }
    }
    ctx->pc = 0x177068u;
label_177068:
    // 0x177068: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17706c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17706cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177070: 0xc0695c4  jal         func_1A5710
    ctx->pc = 0x177070u;
    SET_GPR_U32(ctx, 31, 0x177078u);
    ctx->pc = 0x177074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177070u;
            // 0x177074: 0x2484ad78  addiu       $a0, $a0, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5710u;
    if (runtime->hasFunction(0x1A5710u)) {
        auto targetFn = runtime->lookupFunction(0x1A5710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177078u; }
        if (ctx->pc != 0x177078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5710_0x1a5710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177078u; }
        if (ctx->pc != 0x177078u) { return; }
    }
    ctx->pc = 0x177078u;
label_177078:
    // 0x177078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17707c: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x17707Cu;
    SET_GPR_U32(ctx, 31, 0x177084u);
    ctx->pc = 0x177080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17707Cu;
            // 0x177080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (runtime->hasFunction(0x32C890u)) {
        auto targetFn = runtime->lookupFunction(0x32C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177084u; }
        if (ctx->pc != 0x177084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C890_0x32c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177084u; }
        if (ctx->pc != 0x177084u) { return; }
    }
    ctx->pc = 0x177084u;
label_177084:
    // 0x177084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177088: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x177088u;
    SET_GPR_U32(ctx, 31, 0x177090u);
    ctx->pc = 0x17708Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177088u;
            // 0x17708c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177090u; }
        if (ctx->pc != 0x177090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177090u; }
        if (ctx->pc != 0x177090u) { return; }
    }
    ctx->pc = 0x177090u;
label_177090:
    // 0x177090: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x177094: 0xac62af68  sw          $v0, -0x5098($v1)
    ctx->pc = 0x177094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946664), GPR_U32(ctx, 2));
label_177098:
    // 0x177098: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17709c:
    // 0x17709c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17709cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1770a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1770a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1770a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1770a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1770a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1770a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1770ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1770ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1770B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1770ACu;
            // 0x1770b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1770B4u;
    // 0x1770b4: 0x0  nop
    ctx->pc = 0x1770b4u;
    // NOP
    // 0x1770b8: 0x0  nop
    ctx->pc = 0x1770b8u;
    // NOP
    // 0x1770bc: 0x0  nop
    ctx->pc = 0x1770bcu;
    // NOP
    ctx->pc = 0x1770c0u;
}
