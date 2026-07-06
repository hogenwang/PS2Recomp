#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183C00
// Address: 0x183c00 - 0x184700
void sub_00183C00_0x183c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183C00_0x183c00");
#endif

    switch (ctx->pc) {
        case 0x183c04u: goto label_183c04;
        case 0x183c10u: goto label_183c10;
        case 0x183c1cu: goto label_183c1c;
        case 0x183c28u: goto label_183c28;
        case 0x183c34u: goto label_183c34;
        case 0x183c38u: goto label_183c38;
        case 0x183c7cu: goto label_183c7c;
        case 0x183cacu: goto label_183cac;
        case 0x183cd8u: goto label_183cd8;
        case 0x183ce0u: goto label_183ce0;
        case 0x183cf8u: goto label_183cf8;
        case 0x183d14u: goto label_183d14;
        case 0x183d3cu: goto label_183d3c;
        case 0x183d84u: goto label_183d84;
        case 0x183d90u: goto label_183d90;
        case 0x183da8u: goto label_183da8;
        case 0x183e1cu: goto label_183e1c;
        case 0x183fe8u: goto label_183fe8;
        case 0x18400cu: goto label_18400c;
        case 0x184060u: goto label_184060;
        case 0x184130u: goto label_184130;
        case 0x18423cu: goto label_18423c;
        case 0x184250u: goto label_184250;
        case 0x1843acu: goto label_1843ac;
        case 0x184440u: goto label_184440;
        case 0x184458u: goto label_184458;
        case 0x184510u: goto label_184510;
        case 0x184540u: goto label_184540;
        case 0x184570u: goto label_184570;
        case 0x184598u: goto label_184598;
        case 0x1845a4u: goto label_1845a4;
        case 0x1845b0u: goto label_1845b0;
        case 0x18469cu: goto label_18469c;
        case 0x1846bcu: goto label_1846bc;
        case 0x1846d4u: goto label_1846d4;
        default: break;
    }

    ctx->pc = 0x183c00u;

    // 0x183c00: 0x0  nop
    ctx->pc = 0x183c00u;
    // NOP
label_183c04:
    // 0x183c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x183C08u;
    {
        const bool branch_taken_0x183c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c08) {
            ctx->pc = 0x183C38u;
            goto label_183c38;
        }
    }
    ctx->pc = 0x183C10u;
label_183c10:
    // 0x183c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183c14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x183C14u;
    {
        const bool branch_taken_0x183c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c14) {
            ctx->pc = 0x183C38u;
            goto label_183c38;
        }
    }
    ctx->pc = 0x183C1Cu;
label_183c1c:
    // 0x183c1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183c20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x183C20u;
    {
        const bool branch_taken_0x183c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c20) {
            ctx->pc = 0x183C38u;
            goto label_183c38;
        }
    }
    ctx->pc = 0x183C28u;
label_183c28:
    // 0x183c28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x183c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x183c2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x183C2Cu;
    {
        const bool branch_taken_0x183c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c2c) {
            ctx->pc = 0x183C38u;
            goto label_183c38;
        }
    }
    ctx->pc = 0x183C34u;
label_183c34:
    // 0x183c34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x183c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_183c38:
    // 0x183c38: 0x3e00008  jr          $ra
    ctx->pc = 0x183C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C40u;
    // 0x183c40: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x183c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x183c44: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x183c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x183c48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x183c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x183c4c: 0x24e73cf0  addiu       $a3, $a3, 0x3CF0
    ctx->pc = 0x183c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15600));
    // 0x183c50: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x183c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x183c54: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x183c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x183c58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x183c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x183c5c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x183c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x183c60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x183c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x183c64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x183c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x183c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x183c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x183c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x183c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x183c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_183c7c:
    // 0x183c7c: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x183c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x183c80: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x183c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x183c84: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x183c84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x183c88: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x183c88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x183c8c: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x183c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x183c90: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x183c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x183c94: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x183C94u;
    {
        const bool branch_taken_0x183c94 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x183C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C94u;
        // 0x183c98: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c94) {
            ctx->pc = 0x183C7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183c7c;
        }
    }
    ctx->pc = 0x183C9Cu;
    // 0x183c9c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x183c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x183ca0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x183ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183ca4: 0x24e73d30  addiu       $a3, $a3, 0x3D30
    ctx->pc = 0x183ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15664));
    // 0x183ca8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x183ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_183cac:
    // 0x183cac: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x183cacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x183cb0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x183cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x183cb4: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x183cb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x183cb8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x183cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x183cbc: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x183cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x183cc0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x183cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x183cc4: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x183CC4u;
    {
        const bool branch_taken_0x183cc4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x183CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CC4u;
        // 0x183cc8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183cc4) {
            ctx->pc = 0x183CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183cac;
        }
    }
    ctx->pc = 0x183CCCu;
    // 0x183ccc: 0x3c1e009c  lui         $fp, 0x9C
    ctx->pc = 0x183cccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)156 << 16));
    // 0x183cd0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x183cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x183cd4: 0x27dedb50  addiu       $fp, $fp, -0x24B0
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957904));
label_183cd8:
    // 0x183cd8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x183cd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cdc: 0x0  nop
    ctx->pc = 0x183cdcu;
    // NOP
label_183ce0:
    // 0x183ce0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x183ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x183ce4: 0x107501e8  beq         $v1, $s5, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x183CE4u;
    {
        const bool branch_taken_0x183ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x183ce4) {
            ctx->pc = 0x184488u;
            goto label_184488;
        }
    }
    ctx->pc = 0x183CECu;
    // 0x183cec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x183cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cf0: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x183cf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cf4: 0x0  nop
    ctx->pc = 0x183cf4u;
    // NOP
label_183cf8:
    // 0x183cf8: 0x8ec30078  lw          $v1, 0x78($s6)
    ctx->pc = 0x183cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x183cfc: 0x106001de  beqz        $v1, . + 4 + (0x1DE << 2)
    ctx->pc = 0x183CFCu;
    {
        const bool branch_taken_0x183cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183cfc) {
            ctx->pc = 0x184478u;
            goto label_184478;
        }
    }
    ctx->pc = 0x183D04u;
    // 0x183d04: 0x8c730010  lw          $s3, 0x10($v1)
    ctx->pc = 0x183d04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x183d08: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x183d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x183d0c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x183D0Cu;
    SET_GPR_U32(ctx, 31, 0x183D14u);
    ctx->pc = 0x183D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D0Cu;
    // 0x183d10: 0x26770268  addiu       $s7, $s3, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x183D0Cu, 0x183D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D14u;
label_183d14:
    // 0x183d14: 0x8e64049c  lw          $a0, 0x49C($s3)
    ctx->pc = 0x183d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
    // 0x183d18: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x183d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x183d1c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x183d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x183d20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x183d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x183d24: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x183D24u;
    {
        const bool branch_taken_0x183d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183d24) {
            ctx->pc = 0x183D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183D24u;
            // 0x183d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183D34u;
            goto label_183d34;
        }
    }
    ctx->pc = 0x183D2Cu;
    // 0x183d2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x183D2Cu;
    {
        const bool branch_taken_0x183d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D2Cu;
        // 0x183d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d2c) {
            ctx->pc = 0x183D40u;
            goto label_183d40;
        }
    }
    ctx->pc = 0x183D34u;
label_183d34:
    // 0x183d34: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x183D34u;
    SET_GPR_U32(ctx, 31, 0x183D3Cu);
    ctx->pc = 0x183D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D34u;
    // 0x183d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x183D34u, 0x183D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D3Cu;
label_183d3c:
    // 0x183d3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x183d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_183d40:
    // 0x183d40: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x183d40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x183d44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x183d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x183d48: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183D48u;
    {
        const bool branch_taken_0x183d48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x183d48) {
            ctx->pc = 0x183D58u;
            goto label_183d58;
        }
    }
    ctx->pc = 0x183D50u;
    // 0x183d50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x183D50u;
    {
        const bool branch_taken_0x183d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D50u;
        // 0x183d54: 0x64120002  daddiu      $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d50) {
            ctx->pc = 0x183D78u;
            goto label_183d78;
        }
    }
    ctx->pc = 0x183D58u;
label_183d58:
    // 0x183d58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x183d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x183d5c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183D5Cu;
    {
        const bool branch_taken_0x183d5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x183d5c) {
            ctx->pc = 0x183D70u;
            goto label_183d70;
        }
    }
    ctx->pc = 0x183D64u;
    // 0x183d64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x183D64u;
    {
        const bool branch_taken_0x183d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D64u;
        // 0x183d68: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d64) {
            ctx->pc = 0x183D78u;
            goto label_183d78;
        }
    }
    ctx->pc = 0x183D6Cu;
    // 0x183d6c: 0x0  nop
    ctx->pc = 0x183d6cu;
    // NOP
label_183d70:
    // 0x183d70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x183d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d74: 0x0  nop
    ctx->pc = 0x183d74u;
    // NOP
label_183d78:
    // 0x183d78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x183d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d7c: 0xc060dec  jal         func_1837B0
    ctx->pc = 0x183D7Cu;
    SET_GPR_U32(ctx, 31, 0x183D84u);
    ctx->pc = 0x183D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D7Cu;
    // 0x183d80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1837B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1837B0u, 0x183D7Cu, 0x183D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D84u;
label_183d84:
    // 0x183d84: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x183d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x183d88: 0xc060eb4  jal         func_183AD0
    ctx->pc = 0x183D88u;
    SET_GPR_U32(ctx, 31, 0x183D90u);
    ctx->pc = 0x183D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D88u;
    // 0x183d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AD0u, 0x183D88u, 0x183D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D90u;
label_183d90:
    // 0x183d90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x183d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x183d94: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x183D94u;
    {
        const bool branch_taken_0x183d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x183d94) {
            ctx->pc = 0x183E00u;
            goto label_183e00;
        }
    }
    ctx->pc = 0x183D9Cu;
    // 0x183d9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x183d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183da0: 0xc060dd0  jal         func_183740
    ctx->pc = 0x183DA0u;
    SET_GPR_U32(ctx, 31, 0x183DA8u);
    ctx->pc = 0x183DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DA0u;
    // 0x183da4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183740u, 0x183DA0u, 0x183DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DA8u;
label_183da8:
    // 0x183da8: 0x1040019f  beqz        $v0, . + 4 + (0x19F << 2)
    ctx->pc = 0x183DA8u;
    {
        const bool branch_taken_0x183da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183da8) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183DB0u;
    // 0x183db0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x183db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x183db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183db8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x183DB8u;
    {
        const bool branch_taken_0x183db8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x183db8) {
            ctx->pc = 0x183DD8u;
            goto label_183dd8;
        }
    }
    ctx->pc = 0x183DC0u;
    // 0x183dc0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x183dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x183dc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x183dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183dc8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x183dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x183dcc: 0x946300b0  lhu         $v1, 0xB0($v1)
    ctx->pc = 0x183dccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x183dd0: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x183DD0u;
    {
        const bool branch_taken_0x183dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DD0u;
        // 0x183dd4: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dd0) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183DD8u;
label_183dd8:
    // 0x183dd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x183dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183ddc: 0x14830192  bne         $a0, $v1, . + 4 + (0x192 << 2)
    ctx->pc = 0x183DDCu;
    {
        const bool branch_taken_0x183ddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x183ddc) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183DE4u;
    // 0x183de4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x183de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x183de8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x183de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183dec: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x183decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x183df0: 0x946300b8  lhu         $v1, 0xB8($v1)
    ctx->pc = 0x183df0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x183df4: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x183DF4u;
    {
        const bool branch_taken_0x183df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DF4u;
        // 0x183df8: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183df4) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183DFCu;
    // 0x183dfc: 0x0  nop
    ctx->pc = 0x183dfcu;
    // NOP
label_183e00:
    // 0x183e00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x183e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183e04: 0x14430074  bne         $v0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x183E04u;
    {
        const bool branch_taken_0x183e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x183e04) {
            ctx->pc = 0x183FD8u;
            goto label_183fd8;
        }
    }
    ctx->pc = 0x183E0Cu;
    // 0x183e0c: 0xa6600534  sh          $zero, 0x534($s3)
    ctx->pc = 0x183e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1332), (uint16_t)GPR_U32(ctx, 0));
    // 0x183e10: 0x96650534  lhu         $a1, 0x534($s3)
    ctx->pc = 0x183e10u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1332)));
    // 0x183e14: 0xc05fe18  jal         func_17F860
    ctx->pc = 0x183E14u;
    SET_GPR_U32(ctx, 31, 0x183E1Cu);
    ctx->pc = 0x183E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E14u;
    // 0x183e18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F860u, 0x183E14u, 0x183E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E1Cu;
label_183e1c:
    // 0x183e1c: 0x826304f4  lb          $v1, 0x4F4($s3)
    ctx->pc = 0x183e1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1268)));
    // 0x183e20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x183e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x183e24: 0xa26304f4  sb          $v1, 0x4F4($s3)
    ctx->pc = 0x183e24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1268), (uint8_t)GPR_U32(ctx, 3));
    // 0x183e28: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x183e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x183e2c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x183e2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x183e30: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x183E30u;
    {
        const bool branch_taken_0x183e30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x183e30) {
            ctx->pc = 0x183E58u;
            goto label_183e58;
        }
    }
    ctx->pc = 0x183E38u;
    // 0x183e38: 0x8e650494  lw          $a1, 0x494($s3)
    ctx->pc = 0x183e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x183e3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x183e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x183e40: 0x34647fff  ori         $a0, $v1, 0x7FFF
    ctx->pc = 0x183e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x183e44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x183e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183e48: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x183e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x183e4c: 0xae640494  sw          $a0, 0x494($s3)
    ctx->pc = 0x183e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 4));
    // 0x183e50: 0xa26304f4  sb          $v1, 0x4F4($s3)
    ctx->pc = 0x183e50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1268), (uint8_t)GPR_U32(ctx, 3));
    // 0x183e54: 0x0  nop
    ctx->pc = 0x183e54u;
    // NOP
label_183e58:
    // 0x183e58: 0x8e640270  lw          $a0, 0x270($s3)
    ctx->pc = 0x183e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x183e5c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x183e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x183e60: 0x34639200  ori         $v1, $v1, 0x9200
    ctx->pc = 0x183e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37376);
    // 0x183e64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x183e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x183e68: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x183E68u;
    {
        const bool branch_taken_0x183e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183e68) {
            ctx->pc = 0x183EF8u;
            goto label_183ef8;
        }
    }
    ctx->pc = 0x183E70u;
    // 0x183e70: 0x8e640494  lw          $a0, 0x494($s3)
    ctx->pc = 0x183e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x183e74: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x183e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x183e78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x183e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x183e7c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x183E7Cu;
    {
        const bool branch_taken_0x183e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183e7c) {
            ctx->pc = 0x183E90u;
            goto label_183e90;
        }
    }
    ctx->pc = 0x183E84u;
    // 0x183e84: 0x826304f3  lb          $v1, 0x4F3($s3)
    ctx->pc = 0x183e84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1267)));
    // 0x183e88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x183e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x183e8c: 0xa26304f3  sb          $v1, 0x4F3($s3)
    ctx->pc = 0x183e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1267), (uint8_t)GPR_U32(ctx, 3));
label_183e90:
    // 0x183e90: 0x826304f2  lb          $v1, 0x4F2($s3)
    ctx->pc = 0x183e90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1266)));
    // 0x183e94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x183e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x183e98: 0xa26304f2  sb          $v1, 0x4F2($s3)
    ctx->pc = 0x183e98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1266), (uint8_t)GPR_U32(ctx, 3));
    // 0x183e9c: 0x826304f1  lb          $v1, 0x4F1($s3)
    ctx->pc = 0x183e9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1265)));
    // 0x183ea0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x183ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x183ea4: 0xa26304f1  sb          $v1, 0x4F1($s3)
    ctx->pc = 0x183ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1265), (uint8_t)GPR_U32(ctx, 3));
    // 0x183ea8: 0x826304f2  lb          $v1, 0x4F2($s3)
    ctx->pc = 0x183ea8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1266)));
    // 0x183eac: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x183EACu;
    {
        const bool branch_taken_0x183eac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x183eac) {
            ctx->pc = 0x183ED0u;
            goto label_183ed0;
        }
    }
    ctx->pc = 0x183EB4u;
    // 0x183eb4: 0x8e650494  lw          $a1, 0x494($s3)
    ctx->pc = 0x183eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x183eb8: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x183eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x183ebc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x183ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183ec0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x183ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x183ec4: 0xae640494  sw          $a0, 0x494($s3)
    ctx->pc = 0x183ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 4));
    // 0x183ec8: 0xa26304f2  sb          $v1, 0x4F2($s3)
    ctx->pc = 0x183ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1266), (uint8_t)GPR_U32(ctx, 3));
    // 0x183ecc: 0x0  nop
    ctx->pc = 0x183eccu;
    // NOP
label_183ed0:
    // 0x183ed0: 0x826304f1  lb          $v1, 0x4F1($s3)
    ctx->pc = 0x183ed0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1265)));
    // 0x183ed4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x183ED4u;
    {
        const bool branch_taken_0x183ed4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x183ed4) {
            ctx->pc = 0x183EF8u;
            goto label_183ef8;
        }
    }
    ctx->pc = 0x183EDCu;
    // 0x183edc: 0x8e650494  lw          $a1, 0x494($s3)
    ctx->pc = 0x183edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x183ee0: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x183ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x183ee4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x183ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183ee8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x183ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x183eec: 0xae640494  sw          $a0, 0x494($s3)
    ctx->pc = 0x183eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 4));
    // 0x183ef0: 0xa26304f1  sb          $v1, 0x4F1($s3)
    ctx->pc = 0x183ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1265), (uint8_t)GPR_U32(ctx, 3));
    // 0x183ef4: 0x0  nop
    ctx->pc = 0x183ef4u;
    // NOP
label_183ef8:
    // 0x183ef8: 0x826304f3  lb          $v1, 0x4F3($s3)
    ctx->pc = 0x183ef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1267)));
    // 0x183efc: 0x461001c  bgez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x183EFCu;
    {
        const bool branch_taken_0x183efc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x183efc) {
            ctx->pc = 0x183F70u;
            goto label_183f70;
        }
    }
    ctx->pc = 0x183F04u;
    // 0x183f04: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x183f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x183f08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f0c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x183F0Cu;
    {
        const bool branch_taken_0x183f0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x183f0c) {
            ctx->pc = 0x183F30u;
            goto label_183f30;
        }
    }
    ctx->pc = 0x183F14u;
    // 0x183f14: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x183f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x183f18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x183f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183f1c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x183f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x183f20: 0x946300b2  lhu         $v1, 0xB2($v1)
    ctx->pc = 0x183f20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 178)));
    // 0x183f24: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x183F24u;
    {
        const bool branch_taken_0x183f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F24u;
        // 0x183f28: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f24) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183F2Cu;
    // 0x183f2c: 0x0  nop
    ctx->pc = 0x183f2cu;
    // NOP
label_183f30:
    // 0x183f30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183f34: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x183F34u;
    {
        const bool branch_taken_0x183f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x183f34) {
            ctx->pc = 0x183F58u;
            goto label_183f58;
        }
    }
    ctx->pc = 0x183F3Cu;
    // 0x183f3c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x183f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x183f40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x183f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183f44: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x183f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x183f48: 0x946300ba  lhu         $v1, 0xBA($v1)
    ctx->pc = 0x183f48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 186)));
    // 0x183f4c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x183F4Cu;
    {
        const bool branch_taken_0x183f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F4Cu;
        // 0x183f50: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f4c) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183F54u;
    // 0x183f54: 0x0  nop
    ctx->pc = 0x183f54u;
    // NOP
label_183f58:
    // 0x183f58: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x183f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x183f5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x183f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183f60: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x183f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x183f64: 0x946300b2  lhu         $v1, 0xB2($v1)
    ctx->pc = 0x183f64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 178)));
    // 0x183f68: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x183F68u;
    {
        const bool branch_taken_0x183f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F68u;
        // 0x183f6c: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f68) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183F70u;
label_183f70:
    // 0x183f70: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x183f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x183f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f78: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x183F78u;
    {
        const bool branch_taken_0x183f78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x183f78) {
            ctx->pc = 0x183FA8u;
            goto label_183fa8;
        }
    }
    ctx->pc = 0x183F80u;
    // 0x183f80: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x183f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x183f84: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x183f84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x183f88: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x183f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x183f8c: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x183f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x183f90: 0x948400b4  lhu         $a0, 0xB4($a0)
    ctx->pc = 0x183f90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x183f94: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183F94u;
    {
        const bool branch_taken_0x183f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183f94) {
            ctx->pc = 0x183FA8u;
            goto label_183fa8;
        }
    }
    ctx->pc = 0x183F9Cu;
    // 0x183f9c: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x183F9Cu;
    {
        const bool branch_taken_0x183f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F9Cu;
        // 0x183fa0: 0xa66400f0  sh          $a0, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f9c) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183FA4u;
    // 0x183fa4: 0x0  nop
    ctx->pc = 0x183fa4u;
    // NOP
label_183fa8:
    // 0x183fa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x183fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183fac: 0x14a3011e  bne         $a1, $v1, . + 4 + (0x11E << 2)
    ctx->pc = 0x183FACu;
    {
        const bool branch_taken_0x183fac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x183fac) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183FB4u;
    // 0x183fb4: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x183fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x183fb8: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x183fb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x183fbc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x183fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x183fc0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x183fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x183fc4: 0x948400bc  lhu         $a0, 0xBC($a0)
    ctx->pc = 0x183fc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x183fc8: 0x10640117  beq         $v1, $a0, . + 4 + (0x117 << 2)
    ctx->pc = 0x183FC8u;
    {
        const bool branch_taken_0x183fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x183fc8) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183FD0u;
    // 0x183fd0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x183FD0u;
    {
        const bool branch_taken_0x183fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FD0u;
        // 0x183fd4: 0xa66400f0  sh          $a0, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fd0) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x183FD8u;
label_183fd8:
    // 0x183fd8: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x183FD8u;
    {
        const bool branch_taken_0x183fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183fd8) {
            ctx->pc = 0x184118u;
            goto label_184118;
        }
    }
    ctx->pc = 0x183FE0u;
    // 0x183fe0: 0xc058068  jal         func_1601A0
    ctx->pc = 0x183FE0u;
    SET_GPR_U32(ctx, 31, 0x183FE8u);
    ctx->pc = 0x183FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FE0u;
    // 0x183fe4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601A0u, 0x183FE0u, 0x183FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FE8u;
label_183fe8:
    // 0x183fe8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x183FE8u;
    {
        const bool branch_taken_0x183fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183fe8) {
            ctx->pc = 0x1840A0u;
            goto label_1840a0;
        }
    }
    ctx->pc = 0x183FF0u;
    // 0x183ff0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x183ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x183ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183ff8: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x183FF8u;
    {
        const bool branch_taken_0x183ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x183ff8) {
            ctx->pc = 0x184048u;
            goto label_184048;
        }
    }
    ctx->pc = 0x184000u;
    // 0x184000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184004: 0xc060dd0  jal         func_183740
    ctx->pc = 0x184004u;
    SET_GPR_U32(ctx, 31, 0x18400Cu);
    ctx->pc = 0x184008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184004u;
    // 0x184008: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183740u, 0x184004u, 0x18400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18400Cu;
label_18400c:
    // 0x18400c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18400Cu;
    {
        const bool branch_taken_0x18400c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18400c) {
            ctx->pc = 0x184030u;
            goto label_184030;
        }
    }
    ctx->pc = 0x184014u;
    // 0x184014: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x184014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x184018: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18401c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x184020: 0x946300b6  lhu         $v1, 0xB6($v1)
    ctx->pc = 0x184020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
    // 0x184024: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x184024u;
    {
        const bool branch_taken_0x184024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184024u;
        // 0x184028: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184024) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x18402Cu;
    // 0x18402c: 0x0  nop
    ctx->pc = 0x18402cu;
    // NOP
label_184030:
    // 0x184030: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x184030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x184034: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x184034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x184038: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x18403c: 0x946300b2  lhu         $v1, 0xB2($v1)
    ctx->pc = 0x18403cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 178)));
    // 0x184040: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x184040u;
    {
        const bool branch_taken_0x184040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184040u;
        // 0x184044: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184040) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184048u;
label_184048:
    // 0x184048: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x184048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18404c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18404Cu;
    {
        const bool branch_taken_0x18404c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18404c) {
            ctx->pc = 0x184098u;
            goto label_184098;
        }
    }
    ctx->pc = 0x184054u;
    // 0x184054: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184058: 0xc060dd0  jal         func_183740
    ctx->pc = 0x184058u;
    SET_GPR_U32(ctx, 31, 0x184060u);
    ctx->pc = 0x18405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184058u;
    // 0x18405c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183740u, 0x184058u, 0x184060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184060u;
label_184060:
    // 0x184060: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184060u;
    {
        const bool branch_taken_0x184060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184060) {
            ctx->pc = 0x184080u;
            goto label_184080;
        }
    }
    ctx->pc = 0x184068u;
    // 0x184068: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x184068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18406c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18406cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x184070: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x184070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x184074: 0x946300be  lhu         $v1, 0xBE($v1)
    ctx->pc = 0x184074u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x184078: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x184078u;
    {
        const bool branch_taken_0x184078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184078u;
        // 0x18407c: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184078) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184080u;
label_184080:
    // 0x184080: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x184080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x184084: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x184084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x184088: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x184088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x18408c: 0x946300ba  lhu         $v1, 0xBA($v1)
    ctx->pc = 0x18408cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 186)));
    // 0x184090: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x184090u;
    {
        const bool branch_taken_0x184090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184090u;
        // 0x184094: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184090) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184098u;
label_184098:
    // 0x184098: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x184098u;
    {
        const bool branch_taken_0x184098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184098u;
        // 0x18409c: 0xa66000f0  sh          $zero, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184098) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1840A0u;
label_1840a0:
    // 0x1840a0: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1840a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1840a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1840a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1840a8: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1840A8u;
    {
        const bool branch_taken_0x1840a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1840a8) {
            ctx->pc = 0x1840D8u;
            goto label_1840d8;
        }
    }
    ctx->pc = 0x1840B0u;
    // 0x1840b0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1840b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1840b4: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x1840b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x1840b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1840b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1840bc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1840bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1840c0: 0x948400b0  lhu         $a0, 0xB0($a0)
    ctx->pc = 0x1840c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1840c4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1840C4u;
    {
        const bool branch_taken_0x1840c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1840c4) {
            ctx->pc = 0x1840D8u;
            goto label_1840d8;
        }
    }
    ctx->pc = 0x1840CCu;
    // 0x1840cc: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1840CCu;
    {
        const bool branch_taken_0x1840cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840CCu;
        // 0x1840d0: 0xa66400f0  sh          $a0, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840cc) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1840D4u;
    // 0x1840d4: 0x0  nop
    ctx->pc = 0x1840d4u;
    // NOP
label_1840d8:
    // 0x1840d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1840d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1840dc: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1840DCu;
    {
        const bool branch_taken_0x1840dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1840dc) {
            ctx->pc = 0x184108u;
            goto label_184108;
        }
    }
    ctx->pc = 0x1840E4u;
    // 0x1840e4: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1840e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1840e8: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x1840e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x1840ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1840ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1840f0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1840f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1840f4: 0x948400b8  lhu         $a0, 0xB8($a0)
    ctx->pc = 0x1840f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1840f8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1840F8u;
    {
        const bool branch_taken_0x1840f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1840f8) {
            ctx->pc = 0x184108u;
            goto label_184108;
        }
    }
    ctx->pc = 0x184100u;
    // 0x184100: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x184100u;
    {
        const bool branch_taken_0x184100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184100u;
        // 0x184104: 0xa66400f0  sh          $a0, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184100) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184108u;
label_184108:
    // 0x184108: 0x14a000c7  bnez        $a1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x184108u;
    {
        const bool branch_taken_0x184108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x184108) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184110u;
    // 0x184110: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x184110u;
    {
        const bool branch_taken_0x184110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184110u;
        // 0x184114: 0xa66000f0  sh          $zero, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184110) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184118u;
label_184118:
    // 0x184118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18411c: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x18411Cu;
    {
        const bool branch_taken_0x18411c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18411c) {
            ctx->pc = 0x184228u;
            goto label_184228;
        }
    }
    ctx->pc = 0x184124u;
    // 0x184124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184128: 0xc060dd0  jal         func_183740
    ctx->pc = 0x184128u;
    SET_GPR_U32(ctx, 31, 0x184130u);
    ctx->pc = 0x18412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184128u;
    // 0x18412c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183740u, 0x184128u, 0x184130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184130u;
label_184130:
    // 0x184130: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x184130u;
    {
        const bool branch_taken_0x184130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184130) {
            ctx->pc = 0x1841B0u;
            goto label_1841b0;
        }
    }
    ctx->pc = 0x184138u;
    // 0x184138: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x184138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18413c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184140: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x184140u;
    {
        const bool branch_taken_0x184140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x184140) {
            ctx->pc = 0x184170u;
            goto label_184170;
        }
    }
    ctx->pc = 0x184148u;
    // 0x184148: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x184148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18414c: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x18414cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x184150: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x184150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x184154: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x184154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x184158: 0x948400b6  lhu         $a0, 0xB6($a0)
    ctx->pc = 0x184158u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 182)));
    // 0x18415c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18415Cu;
    {
        const bool branch_taken_0x18415c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x18415c) {
            ctx->pc = 0x184170u;
            goto label_184170;
        }
    }
    ctx->pc = 0x184164u;
    // 0x184164: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x184164u;
    {
        const bool branch_taken_0x184164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184164u;
        // 0x184168: 0xa66400f0  sh          $a0, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184164) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x18416Cu;
    // 0x18416c: 0x0  nop
    ctx->pc = 0x18416cu;
    // NOP
label_184170:
    // 0x184170: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x184170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184174: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x184174u;
    {
        const bool branch_taken_0x184174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x184174) {
            ctx->pc = 0x1841A0u;
            goto label_1841a0;
        }
    }
    ctx->pc = 0x18417Cu;
    // 0x18417c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x18417cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x184180: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x184180u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x184184: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x184184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x184188: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x184188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x18418c: 0x948400be  lhu         $a0, 0xBE($a0)
    ctx->pc = 0x18418cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 190)));
    // 0x184190: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184190u;
    {
        const bool branch_taken_0x184190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x184190) {
            ctx->pc = 0x1841A0u;
            goto label_1841a0;
        }
    }
    ctx->pc = 0x184198u;
    // 0x184198: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x184198u;
    {
        const bool branch_taken_0x184198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184198u;
        // 0x18419c: 0xa66400f0  sh          $a0, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184198) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1841A0u;
label_1841a0:
    // 0x1841a0: 0x14a000a1  bnez        $a1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1841A0u;
    {
        const bool branch_taken_0x1841a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1841a0) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1841A8u;
    // 0x1841a8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1841A8u;
    {
        const bool branch_taken_0x1841a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1841ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841A8u;
        // 0x1841ac: 0xa66000f0  sh          $zero, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841a8) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1841B0u;
label_1841b0:
    // 0x1841b0: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1841b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1841b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1841b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1841b8: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1841B8u;
    {
        const bool branch_taken_0x1841b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1841b8) {
            ctx->pc = 0x1841E8u;
            goto label_1841e8;
        }
    }
    ctx->pc = 0x1841C0u;
    // 0x1841c0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1841c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1841c4: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x1841c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x1841c8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1841c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1841cc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1841ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1841d0: 0x948400b2  lhu         $a0, 0xB2($a0)
    ctx->pc = 0x1841d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 178)));
    // 0x1841d4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1841D4u;
    {
        const bool branch_taken_0x1841d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1841d4) {
            ctx->pc = 0x1841E8u;
            goto label_1841e8;
        }
    }
    ctx->pc = 0x1841DCu;
    // 0x1841dc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1841DCu;
    {
        const bool branch_taken_0x1841dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1841E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841DCu;
        // 0x1841e0: 0xa66400f0  sh          $a0, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841dc) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1841E4u;
    // 0x1841e4: 0x0  nop
    ctx->pc = 0x1841e4u;
    // NOP
label_1841e8:
    // 0x1841e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1841e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1841ec: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1841ECu;
    {
        const bool branch_taken_0x1841ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1841ec) {
            ctx->pc = 0x184218u;
            goto label_184218;
        }
    }
    ctx->pc = 0x1841F4u;
    // 0x1841f4: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1841f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1841f8: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x1841f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x1841fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1841fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x184200: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x184200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x184204: 0x948400ba  lhu         $a0, 0xBA($a0)
    ctx->pc = 0x184204u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 186)));
    // 0x184208: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184208u;
    {
        const bool branch_taken_0x184208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x184208) {
            ctx->pc = 0x184218u;
            goto label_184218;
        }
    }
    ctx->pc = 0x184210u;
    // 0x184210: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x184210u;
    {
        const bool branch_taken_0x184210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184210u;
        // 0x184214: 0xa66400f0  sh          $a0, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184210) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184218u;
label_184218:
    // 0x184218: 0x14a00083  bnez        $a1, . + 4 + (0x83 << 2)
    ctx->pc = 0x184218u;
    {
        const bool branch_taken_0x184218 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x184218) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184220u;
    // 0x184220: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x184220u;
    {
        const bool branch_taken_0x184220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184220u;
        // 0x184224: 0xa66000f0  sh          $zero, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184220) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184228u;
label_184228:
    // 0x184228: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x184228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18422c: 0x1443007e  bne         $v0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x18422Cu;
    {
        const bool branch_taken_0x18422c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18422c) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184234u;
    // 0x184234: 0xc058068  jal         func_1601A0
    ctx->pc = 0x184234u;
    SET_GPR_U32(ctx, 31, 0x18423Cu);
    ctx->pc = 0x184238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184234u;
    // 0x184238: 0x26640268  addiu       $a0, $s3, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601A0u, 0x184234u, 0x18423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18423Cu;
label_18423c:
    // 0x18423c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x18423Cu;
    {
        const bool branch_taken_0x18423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18423c) {
            ctx->pc = 0x1843A0u;
            goto label_1843a0;
        }
    }
    ctx->pc = 0x184244u;
    // 0x184244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184248: 0xc060dd0  jal         func_183740
    ctx->pc = 0x184248u;
    SET_GPR_U32(ctx, 31, 0x184250u);
    ctx->pc = 0x18424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184248u;
    // 0x18424c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183740u, 0x184248u, 0x184250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184250u;
label_184250:
    // 0x184250: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x184250u;
    {
        const bool branch_taken_0x184250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184250) {
            ctx->pc = 0x1842B0u;
            goto label_1842b0;
        }
    }
    ctx->pc = 0x184258u;
    // 0x184258: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x184258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18425c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184260: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x184260u;
    {
        const bool branch_taken_0x184260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x184260) {
            ctx->pc = 0x184280u;
            goto label_184280;
        }
    }
    ctx->pc = 0x184268u;
    // 0x184268: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x184268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18426c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x184270: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x184270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x184274: 0x946300b0  lhu         $v1, 0xB0($v1)
    ctx->pc = 0x184274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x184278: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x184278u;
    {
        const bool branch_taken_0x184278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184278u;
        // 0x18427c: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184278) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184280u;
label_184280:
    // 0x184280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184284: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x184284u;
    {
        const bool branch_taken_0x184284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x184284) {
            ctx->pc = 0x1842A8u;
            goto label_1842a8;
        }
    }
    ctx->pc = 0x18428Cu;
    // 0x18428c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x18428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x184290: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x184290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x184294: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x184294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x184298: 0x946300b8  lhu         $v1, 0xB8($v1)
    ctx->pc = 0x184298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x18429c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x18429Cu;
    {
        const bool branch_taken_0x18429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1842A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18429Cu;
        // 0x1842a0: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18429c) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1842A4u;
    // 0x1842a4: 0x0  nop
    ctx->pc = 0x1842a4u;
    // NOP
label_1842a8:
    // 0x1842a8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1842A8u;
    {
        const bool branch_taken_0x1842a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1842ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842A8u;
        // 0x1842ac: 0xa66000f0  sh          $zero, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842a8) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1842B0u;
label_1842b0:
    // 0x1842b0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1842b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1842b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1842b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1842b8: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1842B8u;
    {
        const bool branch_taken_0x1842b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1842b8) {
            ctx->pc = 0x184328u;
            goto label_184328;
        }
    }
    ctx->pc = 0x1842C0u;
    // 0x1842c0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1842c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1842c4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1842c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1842c8: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x1842c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1842cc: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1842CCu;
    {
        const bool branch_taken_0x1842cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1842cc) {
            ctx->pc = 0x184310u;
            goto label_184310;
        }
    }
    ctx->pc = 0x1842D4u;
    // 0x1842d4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x1842d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x1842d8: 0x9063bf14  lbu         $v1, -0x40EC($v1)
    ctx->pc = 0x1842d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950676)));
    // 0x1842dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1842dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1842e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1842E0u;
    {
        const bool branch_taken_0x1842e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1842e0) {
            ctx->pc = 0x184310u;
            goto label_184310;
        }
    }
    ctx->pc = 0x1842E8u;
    // 0x1842e8: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x1842e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x1842ec: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1842ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1842f0: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x1842f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x1842f4: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x1842f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1842f8: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x1842f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1842fc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1842FCu;
    {
        const bool branch_taken_0x1842fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1842fc) {
            ctx->pc = 0x184310u;
            goto label_184310;
        }
    }
    ctx->pc = 0x184304u;
    // 0x184304: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x184304u;
    {
        const bool branch_taken_0x184304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184304u;
        // 0x184308: 0xa66000f0  sh          $zero, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184304) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x18430Cu;
    // 0x18430c: 0x0  nop
    ctx->pc = 0x18430cu;
    // NOP
label_184310:
    // 0x184310: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x184310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x184314: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x184314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x184318: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x184318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x18431c: 0x94630130  lhu         $v1, 0x130($v1)
    ctx->pc = 0x18431cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x184320: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x184320u;
    {
        const bool branch_taken_0x184320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184320u;
        // 0x184324: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184320) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184328u;
label_184328:
    // 0x184328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x184328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18432c: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18432Cu;
    {
        const bool branch_taken_0x18432c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18432c) {
            ctx->pc = 0x184398u;
            goto label_184398;
        }
    }
    ctx->pc = 0x184334u;
    // 0x184334: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x184334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x184338: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x184338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18433c: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x18433cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x184340: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x184340u;
    {
        const bool branch_taken_0x184340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x184340) {
            ctx->pc = 0x184380u;
            goto label_184380;
        }
    }
    ctx->pc = 0x184348u;
    // 0x184348: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x184348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x18434c: 0x9063bf14  lbu         $v1, -0x40EC($v1)
    ctx->pc = 0x18434cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950676)));
    // 0x184350: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x184350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x184354: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x184354u;
    {
        const bool branch_taken_0x184354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184354) {
            ctx->pc = 0x184380u;
            goto label_184380;
        }
    }
    ctx->pc = 0x18435Cu;
    // 0x18435c: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x18435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x184360: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x184360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x184364: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x184364u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x184368: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x184368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18436c: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x18436cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x184370: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184370u;
    {
        const bool branch_taken_0x184370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x184370) {
            ctx->pc = 0x184380u;
            goto label_184380;
        }
    }
    ctx->pc = 0x184378u;
    // 0x184378: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x184378u;
    {
        const bool branch_taken_0x184378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184378u;
        // 0x18437c: 0xa66000f0  sh          $zero, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184378) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184380u;
label_184380:
    // 0x184380: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x184380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x184384: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x184384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x184388: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x184388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x18438c: 0x94630150  lhu         $v1, 0x150($v1)
    ctx->pc = 0x18438cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x184390: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x184390u;
    {
        const bool branch_taken_0x184390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184390u;
        // 0x184394: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184390) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x184398u;
label_184398:
    // 0x184398: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x184398u;
    {
        const bool branch_taken_0x184398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184398u;
        // 0x18439c: 0xa66000f0  sh          $zero, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184398) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1843A0u;
label_1843a0:
    // 0x1843a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1843a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843a4: 0xc060dd0  jal         func_183740
    ctx->pc = 0x1843A4u;
    SET_GPR_U32(ctx, 31, 0x1843ACu);
    ctx->pc = 0x1843A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843A4u;
    // 0x1843a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183740u, 0x1843A4u, 0x1843ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843ACu;
label_1843ac:
    // 0x1843ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1843ACu;
    {
        const bool branch_taken_0x1843ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1843ac) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1843B4u;
    // 0x1843b4: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x1843b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1843b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1843b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1843bc: 0x14c3000c  bne         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1843BCu;
    {
        const bool branch_taken_0x1843bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1843bc) {
            ctx->pc = 0x1843F0u;
            goto label_1843f0;
        }
    }
    ctx->pc = 0x1843C4u;
    // 0x1843c4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1843c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1843c8: 0x966400ec  lhu         $a0, 0xEC($s3)
    ctx->pc = 0x1843c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x1843cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1843ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1843d0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1843d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1843d4: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x1843d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1843d8: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x1843d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1843dc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1843DCu;
    {
        const bool branch_taken_0x1843dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1843dc) {
            ctx->pc = 0x1843F0u;
            goto label_1843f0;
        }
    }
    ctx->pc = 0x1843E4u;
    // 0x1843e4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1843e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1843e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1843E8u;
    {
        const bool branch_taken_0x1843e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1843ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843E8u;
        // 0x1843ec: 0xa66300f0  sh          $v1, 0xF0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1843e8) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1843F0u;
label_1843f0:
    // 0x1843f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1843f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1843f4: 0x14c3000c  bne         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1843F4u;
    {
        const bool branch_taken_0x1843f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1843f4) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x1843FCu;
    // 0x1843fc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1843fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x184400: 0x966400ec  lhu         $a0, 0xEC($s3)
    ctx->pc = 0x184400u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
    // 0x184404: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x184404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x184408: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x184408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x18440c: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x18440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x184410: 0x94a3000e  lhu         $v1, 0xE($a1)
    ctx->pc = 0x184410u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x184414: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x184414u;
    {
        const bool branch_taken_0x184414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184414) {
            ctx->pc = 0x184428u;
            goto label_184428;
        }
    }
    ctx->pc = 0x18441Cu;
    // 0x18441c: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x18441cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x184420: 0xa66300f0  sh          $v1, 0xF0($s3)
    ctx->pc = 0x184420u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x184424: 0x0  nop
    ctx->pc = 0x184424u;
    // NOP
label_184428:
    // 0x184428: 0x966400f0  lhu         $a0, 0xF0($s3)
    ctx->pc = 0x184428u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x18442c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x184430: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x184430u;
    {
        const bool branch_taken_0x184430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184430) {
            ctx->pc = 0x184478u;
            goto label_184478;
        }
    }
    ctx->pc = 0x184438u;
    // 0x184438: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x184438u;
    SET_GPR_U32(ctx, 31, 0x184440u);
    ctx->pc = 0x18443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184438u;
    // 0x18443c: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADE0u, 0x184438u, 0x184440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184440u;
label_184440:
    // 0x184440: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x184440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184444: 0x30632020  andi        $v1, $v1, 0x2020
    ctx->pc = 0x184444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8224);
    // 0x184448: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x184448u;
    {
        const bool branch_taken_0x184448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184448) {
            ctx->pc = 0x184478u;
            goto label_184478;
        }
    }
    ctx->pc = 0x184450u;
    // 0x184450: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x184450u;
    SET_GPR_U32(ctx, 31, 0x184458u);
    ctx->pc = 0x184454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184450u;
    // 0x184454: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x184450u, 0x184458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184458u;
label_184458:
    // 0x184458: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x184458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x18445c: 0x9063f35b  lbu         $v1, -0xCA5($v1)
    ctx->pc = 0x18445cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964059)));
    // 0x184460: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x184460u;
    {
        const bool branch_taken_0x184460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184460) {
            ctx->pc = 0x184478u;
            goto label_184478;
        }
    }
    ctx->pc = 0x184468u;
    // 0x184468: 0x8e640270  lw          $a0, 0x270($s3)
    ctx->pc = 0x184468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x18446c: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x18446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x184470: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x184470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x184474: 0xae630270  sw          $v1, 0x270($s3)
    ctx->pc = 0x184474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 3));
label_184478:
    // 0x184478: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x184478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18447c: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x18447cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x184480: 0x1460fe1d  bnez        $v1, . + 4 + (-0x1E3 << 2)
    ctx->pc = 0x184480u;
    {
        const bool branch_taken_0x184480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x184484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184480u;
        // 0x184484: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184480) {
            ctx->pc = 0x183CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183cf8;
        }
    }
    ctx->pc = 0x184488u;
label_184488:
    // 0x184488: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x184488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x18448c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x18448cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x184490: 0x1460fe13  bnez        $v1, . + 4 + (-0x1ED << 2)
    ctx->pc = 0x184490u;
    {
        const bool branch_taken_0x184490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184490) {
            ctx->pc = 0x183CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183ce0;
        }
    }
    ctx->pc = 0x184498u;
    // 0x184498: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x184498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18449c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1844a0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1844a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1844a4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1844a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1844a8: 0x1460fe0b  bnez        $v1, . + 4 + (-0x1F5 << 2)
    ctx->pc = 0x1844A8u;
    {
        const bool branch_taken_0x1844a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1844ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844A8u;
        // 0x1844ac: 0x27de0248  addiu       $fp, $fp, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844a8) {
            ctx->pc = 0x183CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183cd8;
        }
    }
    ctx->pc = 0x1844B0u;
    // 0x1844b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1844b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1844b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1844b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1844b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1844b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1844bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1844bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1844c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1844c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1844c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1844c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1844c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1844c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1844cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1844ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1844d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1844d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1844d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1844d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1844d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1844D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1844DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844D8u;
        // 0x1844dc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1844D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1844E0u;
    // 0x1844e0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1844e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1844e4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1844e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x1844e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1844e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1844ec: 0x24c63db0  addiu       $a2, $a2, 0x3DB0
    ctx->pc = 0x1844ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15792));
    // 0x1844f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1844f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1844f4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1844f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1844f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1844f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1844fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1844fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184504: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x184504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18450c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x18450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_184510:
    // 0x184510: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x184510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x184514: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x184514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x184518: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x184518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x18451c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x18451cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x184520: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x184520u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x184524: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x184524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x184528: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x184528u;
    {
        const bool branch_taken_0x184528 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x18452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184528u;
        // 0x18452c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184528) {
            ctx->pc = 0x184510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184510;
        }
    }
    ctx->pc = 0x184530u;
    // 0x184530: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x184530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x184534: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x184534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x184538: 0x24c63e30  addiu       $a2, $a2, 0x3E30
    ctx->pc = 0x184538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15920));
    // 0x18453c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_184540:
    // 0x184540: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x184540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x184544: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x184544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x184548: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x184548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x18454c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x18454cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x184550: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x184550u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x184554: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x184554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x184558: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x184558u;
    {
        const bool branch_taken_0x184558 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x18455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184558u;
        // 0x18455c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184558) {
            ctx->pc = 0x184540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184540;
        }
    }
    ctx->pc = 0x184560u;
    // 0x184560: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x184560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x184564: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x184564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184568: 0x24c63e50  addiu       $a2, $a2, 0x3E50
    ctx->pc = 0x184568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15952));
    // 0x18456c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184570:
    // 0x184570: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x184570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x184574: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x184574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x184578: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x184578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x18457c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x18457cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x184580: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x184580u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x184584: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x184584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x184588: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x184588u;
    {
        const bool branch_taken_0x184588 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x18458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184588u;
        // 0x18458c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184588) {
            ctx->pc = 0x184570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184570;
        }
    }
    ctx->pc = 0x184590u;
    // 0x184590: 0xc062794  jal         func_189E50
    ctx->pc = 0x184590u;
    SET_GPR_U32(ctx, 31, 0x184598u);
    ctx->pc = 0x184594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184590u;
    // 0x184594: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E50u, 0x184590u, 0x184598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184598u;
label_184598:
    // 0x184598: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x184598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18459c: 0xc060e4c  jal         func_183930
    ctx->pc = 0x18459Cu;
    SET_GPR_U32(ctx, 31, 0x1845A4u);
    ctx->pc = 0x1845A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18459Cu;
    // 0x1845a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183930u, 0x18459Cu, 0x1845A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845A4u;
label_1845a4:
    // 0x1845a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1845a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1845a8: 0xc060eb4  jal         func_183AD0
    ctx->pc = 0x1845A8u;
    SET_GPR_U32(ctx, 31, 0x1845B0u);
    ctx->pc = 0x1845ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1845A8u;
    // 0x1845ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AD0u, 0x1845A8u, 0x1845B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845B0u;
label_1845b0:
    // 0x1845b0: 0x8e640494  lw          $a0, 0x494($s3)
    ctx->pc = 0x1845b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x1845b4: 0x24031600  addiu       $v1, $zero, 0x1600
    ctx->pc = 0x1845b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    // 0x1845b8: 0x30841600  andi        $a0, $a0, 0x1600
    ctx->pc = 0x1845b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)5632);
    // 0x1845bc: 0x54830046  bnel        $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1845BCu;
    {
        const bool branch_taken_0x1845bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1845bc) {
            ctx->pc = 0x1845C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1845BCu;
            // 0x1845c0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1846D8u;
            goto label_1846d8;
        }
    }
    ctx->pc = 0x1845C4u;
    // 0x1845c4: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x1845c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1845c8: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x1845C8u;
    {
        const bool branch_taken_0x1845c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1845c8) {
            ctx->pc = 0x1846D4u;
            goto label_1846d4;
        }
    }
    ctx->pc = 0x1845D0u;
    // 0x1845d0: 0xa26004f1  sb          $zero, 0x4F1($s3)
    ctx->pc = 0x1845d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1265), (uint8_t)GPR_U32(ctx, 0));
    // 0x1845d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1845d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1845d8: 0xa26004f2  sb          $zero, 0x4F2($s3)
    ctx->pc = 0x1845d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1266), (uint8_t)GPR_U32(ctx, 0));
    // 0x1845dc: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x1845dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1845e0: 0xa26004f3  sb          $zero, 0x4F3($s3)
    ctx->pc = 0x1845e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1267), (uint8_t)GPR_U32(ctx, 0));
    // 0x1845e4: 0x24039fff  addiu       $v1, $zero, -0x6001
    ctx->pc = 0x1845e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294942719));
    // 0x1845e8: 0xa26504f4  sb          $a1, 0x4F4($s3)
    ctx->pc = 0x1845e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1268), (uint8_t)GPR_U32(ctx, 5));
    // 0x1845ec: 0x8e650494  lw          $a1, 0x494($s3)
    ctx->pc = 0x1845ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x1845f0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1845f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1845f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1845f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1845f8: 0xae640494  sw          $a0, 0x494($s3)
    ctx->pc = 0x1845f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 4));
    // 0x1845fc: 0xae630494  sw          $v1, 0x494($s3)
    ctx->pc = 0x1845fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 3));
    // 0x184600: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x184600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x184604: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184604u;
    {
        const bool branch_taken_0x184604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184604u;
        // 0x184608: 0xae630494  sw          $v1, 0x494($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184604) {
            ctx->pc = 0x184620u;
            goto label_184620;
        }
    }
    ctx->pc = 0x18460Cu;
    // 0x18460c: 0x8e630494  lw          $v1, 0x494($s3)
    ctx->pc = 0x18460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x184610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x184610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184614: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x184614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x184618: 0xae630494  sw          $v1, 0x494($s3)
    ctx->pc = 0x184618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 3));
    // 0x18461c: 0xa26204f1  sb          $v0, 0x4F1($s3)
    ctx->pc = 0x18461cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1265), (uint8_t)GPR_U32(ctx, 2));
label_184620:
    // 0x184620: 0x8e62048c  lw          $v0, 0x48C($s3)
    ctx->pc = 0x184620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1164)));
    // 0x184624: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x184624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x184628: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x184628u;
    {
        const bool branch_taken_0x184628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184628) {
            ctx->pc = 0x18462Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184628u;
            // 0x18462c: 0x321100ff  andi        $s1, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184644u;
            goto label_184644;
        }
    }
    ctx->pc = 0x184630u;
    // 0x184630: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x184630u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x184634: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x184634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x184638: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x184638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18463c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18463Cu;
    {
        const bool branch_taken_0x18463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18463Cu;
        // 0x184640: 0x8452008c  lh          $s2, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18463c) {
            ctx->pc = 0x184650u;
            goto label_184650;
        }
    }
    ctx->pc = 0x184644u;
label_184644:
    // 0x184644: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x184644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x184648: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x184648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18464c: 0x84520084  lh          $s2, 0x84($v0)
    ctx->pc = 0x18464cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 132)));
label_184650:
    // 0x184650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x184650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x184654: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x184654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x184658: 0xa26204f2  sb          $v0, 0x4F2($s3)
    ctx->pc = 0x184658u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1266), (uint8_t)GPR_U32(ctx, 2));
    // 0x18465c: 0x8e620494  lw          $v0, 0x494($s3)
    ctx->pc = 0x18465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x184660: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x184660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x184664: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x184664u;
    {
        const bool branch_taken_0x184664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184664u;
        // 0x184668: 0xae620494  sw          $v0, 0x494($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184664) {
            ctx->pc = 0x184678u;
            goto label_184678;
        }
    }
    ctx->pc = 0x18466Cu;
    // 0x18466c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x184670: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184670u;
    {
        const bool branch_taken_0x184670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x184670) {
            ctx->pc = 0x184674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184670u;
            // 0x184674: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184684u;
            goto label_184684;
        }
    }
    ctx->pc = 0x184678u;
label_184678:
    // 0x184678: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x184678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18467c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18467Cu;
    {
        const bool branch_taken_0x18467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18467Cu;
        // 0x184680: 0xa26204f3  sb          $v0, 0x4F3($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1267), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18467c) {
            ctx->pc = 0x184688u;
            goto label_184688;
        }
    }
    ctx->pc = 0x184684u;
label_184684:
    // 0x184684: 0xa26204f3  sb          $v0, 0x4F3($s3)
    ctx->pc = 0x184684u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1267), (uint8_t)GPR_U32(ctx, 2));
label_184688:
    // 0x184688: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x18468c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x184690: 0x94450050  lhu         $a1, 0x50($v0)
    ctx->pc = 0x184690u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x184694: 0xc058674  jal         func_1619D0
    ctx->pc = 0x184694u;
    SET_GPR_U32(ctx, 31, 0x18469Cu);
    ctx->pc = 0x184698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184694u;
    // 0x184698: 0x266405f8  addiu       $a0, $s3, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1619D0u, 0x184694u, 0x18469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18469Cu;
label_18469c:
    // 0x18469c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x18469cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1846a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1846a4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1846a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1846a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1846a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1846ac: 0x94460060  lhu         $a2, 0x60($v0)
    ctx->pc = 0x1846acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1846b0: 0x94470062  lhu         $a3, 0x62($v0)
    ctx->pc = 0x1846b0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x1846b4: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x1846B4u;
    SET_GPR_U32(ctx, 31, 0x1846BCu);
    ctx->pc = 0x1846B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1846B4u;
    // 0x1846b8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F80u, 0x1846B4u, 0x1846BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846BCu;
label_1846bc:
    // 0x1846bc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1846bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1846c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1846c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1846c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1846c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1846c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846cc: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x1846CCu;
    SET_GPR_U32(ctx, 31, 0x1846D4u);
    ctx->pc = 0x1846D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1846CCu;
    // 0x1846d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F80u, 0x1846CCu, 0x1846D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846D4u;
label_1846d4:
    // 0x1846d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1846d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1846d8:
    // 0x1846d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1846d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1846dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1846dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1846e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1846e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1846e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1846e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1846e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1846e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1846ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1846ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1846F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846ECu;
        // 0x1846f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1846ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1846F4u;
    // 0x1846f4: 0x0  nop
    ctx->pc = 0x1846f4u;
    // NOP
    // 0x1846f8: 0x0  nop
    ctx->pc = 0x1846f8u;
    // NOP
    // 0x1846fc: 0x0  nop
    ctx->pc = 0x1846fcu;
    // NOP
    if (ctx->pc == 0x1846fcu) { ctx->pc = 0x184700u; }
}
