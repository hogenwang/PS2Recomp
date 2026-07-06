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

// Function: sub_00288B80
// Address: 0x288b80 - 0x288ee8
void sub_00288B80_0x288b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288B80_0x288b80");
#endif

    switch (ctx->pc) {
        case 0x288be8u: goto label_288be8;
        case 0x288c00u: goto label_288c00;
        case 0x288c0cu: goto label_288c0c;
        case 0x288c1cu: goto label_288c1c;
        case 0x288c2cu: goto label_288c2c;
        case 0x288c40u: goto label_288c40;
        case 0x288cb8u: goto label_288cb8;
        case 0x288cc8u: goto label_288cc8;
        case 0x288cd8u: goto label_288cd8;
        case 0x288cecu: goto label_288cec;
        case 0x288d64u: goto label_288d64;
        case 0x288d74u: goto label_288d74;
        case 0x288d84u: goto label_288d84;
        case 0x288d98u: goto label_288d98;
        case 0x288e28u: goto label_288e28;
        case 0x288e38u: goto label_288e38;
        case 0x288e48u: goto label_288e48;
        case 0x288e5cu: goto label_288e5c;
        default: break;
    }

    ctx->pc = 0x288b80u;

    // 0x288b80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x288b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x288b84: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x288b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x288b88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x288b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x288b8c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x288b8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b90: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x288b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x288b94: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x288b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x288b98: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x288b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x288b9c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x288b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x288ba0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x288ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x288ba4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x288ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x288ba8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x288ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x288bac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x288bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x288bb0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x288bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x288bb4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x288bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x288bb8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x288bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x288bbc: 0x1aa000bd  blez        $s5, . + 4 + (0xBD << 2)
    ctx->pc = 0x288BBCu;
    {
        const bool branch_taken_0x288bbc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x288BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BBCu;
        // 0x288bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288bbc) {
            ctx->pc = 0x288EB4u;
            goto label_288eb4;
        }
    }
    ctx->pc = 0x288BC4u;
    // 0x288bc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x288bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x288bc8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x288bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x288bcc: 0x7183e  dsrl32      $v1, $a3, 0
    ctx->pc = 0x288bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x288bd0: 0x62f024  and         $fp, $v1, $v0
    ctx->pc = 0x288bd0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x288bd4: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x288bd4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x288bd8: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x288bd8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x288bdc: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x288BDCu;
    {
        const bool branch_taken_0x288bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BDCu;
        // 0x288be0: 0xe2b824  and         $s7, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288bdc) {
            ctx->pc = 0x288E04u;
            goto label_288e04;
        }
    }
    ctx->pc = 0x288BE4u;
    // 0x288be4: 0x0  nop
    ctx->pc = 0x288be4u;
    // NOP
label_288be8:
    // 0x288be8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288bec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x288becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bf0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x288bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x288bf4: 0xdc540008  ld          $s4, 0x8($v0)
    ctx->pc = 0x288bf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288bf8: 0x2969024  and         $s2, $s4, $s6
    ctx->pc = 0x288bf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & GPR_U64(ctx, 22));
    // 0x288bfc: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x288bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_288c00:
    // 0x288c00: 0x56a024  and         $s4, $v0, $s6
    ctx->pc = 0x288c00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x288c04: 0xc048082  jal         func_120208
    ctx->pc = 0x288C04u;
    SET_GPR_U32(ctx, 31, 0x288C0Cu);
    ctx->pc = 0x288C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C04u;
    // 0x288c08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288C04u, 0x288C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C0Cu;
label_288c0c:
    // 0x288c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c14: 0xc048082  jal         func_120208
    ctx->pc = 0x288C14u;
    SET_GPR_U32(ctx, 31, 0x288C1Cu);
    ctx->pc = 0x288C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C14u;
    // 0x288c18: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288C14u, 0x288C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C1Cu;
label_288c1c:
    // 0x288c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x288c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c24: 0xc048082  jal         func_120208
    ctx->pc = 0x288C24u;
    SET_GPR_U32(ctx, 31, 0x288C2Cu);
    ctx->pc = 0x288C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C24u;
    // 0x288c28: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288C24u, 0x288C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C2Cu;
label_288c2c:
    // 0x288c2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x288c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c34: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x288c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c38: 0xc048082  jal         func_120208
    ctx->pc = 0x288C38u;
    SET_GPR_U32(ctx, 31, 0x288C40u);
    ctx->pc = 0x288C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C38u;
    // 0x288c3c: 0x213802d  daddu       $s0, $s0, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288C38u, 0x288C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C40u;
label_288c40:
    // 0x288c40: 0x213282b  sltu        $a1, $s0, $s3
    ctx->pc = 0x288c40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x288c44: 0x2161824  and         $v1, $s0, $s6
    ctx->pc = 0x288c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288c48: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x288c48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288c4c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x288c4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x288c50: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x288c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288c54: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x288c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x288c58: 0x233882d  daddu       $s1, $s1, $s3
    ctx->pc = 0x288c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 19));
    // 0x288c5c: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x288c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288c60: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x288c60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288c64: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x288c64u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x288c68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x288c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288c6c: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x288c6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288c70: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x288c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288c74: 0x222902d  daddu       $s2, $s1, $v0
    ctx->pc = 0x288c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288c78: 0x233882b  sltu        $s1, $s1, $s3
    ctx->pc = 0x288c78u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x288c7c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x288c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288c80: 0x91202d  daddu       $a0, $a0, $s1
    ctx->pc = 0x288c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
    // 0x288c84: 0xfc720008  sd          $s2, 0x8($v1)
    ctx->pc = 0x288c84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 18));
    // 0x288c88: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x288c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288c8c: 0x12a00088  beqz        $s5, . + 4 + (0x88 << 2)
    ctx->pc = 0x288C8Cu;
    {
        const bool branch_taken_0x288c8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C8Cu;
        // 0x288c90: 0xffa40008  sd          $a0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c8c) {
            ctx->pc = 0x288EB0u;
            goto label_288eb0;
        }
    }
    ctx->pc = 0x288C94u;
    // 0x288c94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288c98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x288c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c9c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x288c9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x288ca0: 0xdc540010  ld          $s4, 0x10($v0)
    ctx->pc = 0x288ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x288ca4: 0x2969024  and         $s2, $s4, $s6
    ctx->pc = 0x288ca4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & GPR_U64(ctx, 22));
    // 0x288ca8: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x288ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x288cac: 0x56a024  and         $s4, $v0, $s6
    ctx->pc = 0x288cacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x288cb0: 0xc048082  jal         func_120208
    ctx->pc = 0x288CB0u;
    SET_GPR_U32(ctx, 31, 0x288CB8u);
    ctx->pc = 0x288CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CB0u;
    // 0x288cb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288CB0u, 0x288CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CB8u;
label_288cb8:
    // 0x288cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cc0: 0xc048082  jal         func_120208
    ctx->pc = 0x288CC0u;
    SET_GPR_U32(ctx, 31, 0x288CC8u);
    ctx->pc = 0x288CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CC0u;
    // 0x288cc4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288CC0u, 0x288CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CC8u;
label_288cc8:
    // 0x288cc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ccc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x288cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cd0: 0xc048082  jal         func_120208
    ctx->pc = 0x288CD0u;
    SET_GPR_U32(ctx, 31, 0x288CD8u);
    ctx->pc = 0x288CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CD0u;
    // 0x288cd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288CD0u, 0x288CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CD8u;
label_288cd8:
    // 0x288cd8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288cd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x288cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ce0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x288ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ce4: 0xc048082  jal         func_120208
    ctx->pc = 0x288CE4u;
    SET_GPR_U32(ctx, 31, 0x288CECu);
    ctx->pc = 0x288CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CE4u;
    // 0x288ce8: 0x213802d  daddu       $s0, $s0, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288CE4u, 0x288CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CECu;
label_288cec:
    // 0x288cec: 0x213282b  sltu        $a1, $s0, $s3
    ctx->pc = 0x288cecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x288cf0: 0x2161824  and         $v1, $s0, $s6
    ctx->pc = 0x288cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288cf4: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x288cf4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288cf8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x288cf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x288cfc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x288cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288d00: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x288d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x288d04: 0x233882d  daddu       $s1, $s1, $s3
    ctx->pc = 0x288d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 19));
    // 0x288d08: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x288d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288d0c: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x288d0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288d10: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x288d10u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x288d14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x288d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288d18: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x288d18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288d1c: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x288d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288d20: 0x222902d  daddu       $s2, $s1, $v0
    ctx->pc = 0x288d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288d24: 0x233882b  sltu        $s1, $s1, $s3
    ctx->pc = 0x288d24u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x288d28: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x288d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288d2c: 0x91202d  daddu       $a0, $a0, $s1
    ctx->pc = 0x288d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
    // 0x288d30: 0xfc720010  sd          $s2, 0x10($v1)
    ctx->pc = 0x288d30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 18));
    // 0x288d34: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x288d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288d38: 0x12a0005d  beqz        $s5, . + 4 + (0x5D << 2)
    ctx->pc = 0x288D38u;
    {
        const bool branch_taken_0x288d38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D38u;
        // 0x288d3c: 0xffa40008  sd          $a0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d38) {
            ctx->pc = 0x288EB0u;
            goto label_288eb0;
        }
    }
    ctx->pc = 0x288D40u;
    // 0x288d40: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288d44: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x288d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d48: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x288d48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x288d4c: 0xdc540018  ld          $s4, 0x18($v0)
    ctx->pc = 0x288d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x288d50: 0x2969024  and         $s2, $s4, $s6
    ctx->pc = 0x288d50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & GPR_U64(ctx, 22));
    // 0x288d54: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x288d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x288d58: 0x56a024  and         $s4, $v0, $s6
    ctx->pc = 0x288d58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x288d5c: 0xc048082  jal         func_120208
    ctx->pc = 0x288D5Cu;
    SET_GPR_U32(ctx, 31, 0x288D64u);
    ctx->pc = 0x288D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D5Cu;
    // 0x288d60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288D5Cu, 0x288D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D64u;
label_288d64:
    // 0x288d64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d6c: 0xc048082  jal         func_120208
    ctx->pc = 0x288D6Cu;
    SET_GPR_U32(ctx, 31, 0x288D74u);
    ctx->pc = 0x288D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D6Cu;
    // 0x288d70: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288D6Cu, 0x288D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D74u;
label_288d74:
    // 0x288d74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x288d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d7c: 0xc048082  jal         func_120208
    ctx->pc = 0x288D7Cu;
    SET_GPR_U32(ctx, 31, 0x288D84u);
    ctx->pc = 0x288D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D7Cu;
    // 0x288d80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288D7Cu, 0x288D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D84u;
label_288d84:
    // 0x288d84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x288d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d8c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x288d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d90: 0xc048082  jal         func_120208
    ctx->pc = 0x288D90u;
    SET_GPR_U32(ctx, 31, 0x288D98u);
    ctx->pc = 0x288D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D90u;
    // 0x288d94: 0x213802d  daddu       $s0, $s0, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288D90u, 0x288D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D98u;
label_288d98:
    // 0x288d98: 0x213282b  sltu        $a1, $s0, $s3
    ctx->pc = 0x288d98u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x288d9c: 0x2161824  and         $v1, $s0, $s6
    ctx->pc = 0x288d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288da0: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x288da0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288da4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x288da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x288da8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x288da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288dac: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x288dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x288db0: 0x233882d  daddu       $s1, $s1, $s3
    ctx->pc = 0x288db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 19));
    // 0x288db4: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x288db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288db8: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x288db8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288dbc: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x288dbcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x288dc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x288dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288dc4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x288dc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288dc8: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x288dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288dcc: 0x222902d  daddu       $s2, $s1, $v0
    ctx->pc = 0x288dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288dd0: 0x233882b  sltu        $s1, $s1, $s3
    ctx->pc = 0x288dd0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x288dd4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x288dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288dd8: 0x91202d  daddu       $a0, $a0, $s1
    ctx->pc = 0x288dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
    // 0x288ddc: 0xfc720018  sd          $s2, 0x18($v1)
    ctx->pc = 0x288ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 18));
    // 0x288de0: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x288de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288de4: 0x12a00032  beqz        $s5, . + 4 + (0x32 << 2)
    ctx->pc = 0x288DE4u;
    {
        const bool branch_taken_0x288de4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DE4u;
        // 0x288de8: 0xffa40008  sd          $a0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288de4) {
            ctx->pc = 0x288EB0u;
            goto label_288eb0;
        }
    }
    ctx->pc = 0x288DECu;
    // 0x288dec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x288decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288df0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x288df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288df4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x288df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x288df8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x288df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x288dfc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x288dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x288e00: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x288e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_288e04:
    // 0x288e04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x288e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x288e08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x288e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e0c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x288e0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x288e10: 0xdc740000  ld          $s4, 0x0($v1)
    ctx->pc = 0x288e10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288e14: 0x2969024  and         $s2, $s4, $s6
    ctx->pc = 0x288e14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & GPR_U64(ctx, 22));
    // 0x288e18: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x288e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x288e1c: 0x56a024  and         $s4, $v0, $s6
    ctx->pc = 0x288e1cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x288e20: 0xc048082  jal         func_120208
    ctx->pc = 0x288E20u;
    SET_GPR_U32(ctx, 31, 0x288E28u);
    ctx->pc = 0x288E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E20u;
    // 0x288e24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288E20u, 0x288E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E28u;
label_288e28:
    // 0x288e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e30: 0xc048082  jal         func_120208
    ctx->pc = 0x288E30u;
    SET_GPR_U32(ctx, 31, 0x288E38u);
    ctx->pc = 0x288E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E30u;
    // 0x288e34: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288E30u, 0x288E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E38u;
label_288e38:
    // 0x288e38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x288e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e40: 0xc048082  jal         func_120208
    ctx->pc = 0x288E40u;
    SET_GPR_U32(ctx, 31, 0x288E48u);
    ctx->pc = 0x288E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E40u;
    // 0x288e44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288E40u, 0x288E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E48u;
label_288e48:
    // 0x288e48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x288e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e50: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x288e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e54: 0xc048082  jal         func_120208
    ctx->pc = 0x288E54u;
    SET_GPR_U32(ctx, 31, 0x288E5Cu);
    ctx->pc = 0x288E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E54u;
    // 0x288e58: 0x213802d  daddu       $s0, $s0, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288E54u, 0x288E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E5Cu;
label_288e5c:
    // 0x288e5c: 0x213282b  sltu        $a1, $s0, $s3
    ctx->pc = 0x288e5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x288e60: 0x2161824  and         $v1, $s0, $s6
    ctx->pc = 0x288e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288e64: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x288e64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288e68: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x288e68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x288e6c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x288e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288e70: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x288e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x288e74: 0x233882d  daddu       $s1, $s1, $s3
    ctx->pc = 0x288e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 19));
    // 0x288e78: 0x43202d  daddu       $a0, $v0, $v1
    ctx->pc = 0x288e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288e7c: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x288e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x288e80: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x288e80u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x288e84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x288e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288e88: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x288e88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288e8c: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x288e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288e90: 0x222902d  daddu       $s2, $s1, $v0
    ctx->pc = 0x288e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288e94: 0x233882b  sltu        $s1, $s1, $s3
    ctx->pc = 0x288e94u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x288e98: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x288e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x288e9c: 0x91202d  daddu       $a0, $a0, $s1
    ctx->pc = 0x288e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
    // 0x288ea0: 0xfc720000  sd          $s2, 0x0($v1)
    ctx->pc = 0x288ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 18));
    // 0x288ea4: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x288ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x288ea8: 0x16a0ff4f  bnez        $s5, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x288EA8u;
    {
        const bool branch_taken_0x288ea8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x288EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EA8u;
        // 0x288eac: 0xffa40008  sd          $a0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ea8) {
            ctx->pc = 0x288BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288be8;
        }
    }
    ctx->pc = 0x288EB0u;
label_288eb0:
    // 0x288eb0: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x288eb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_288eb4:
    // 0x288eb4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x288eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288eb8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x288eb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288ebc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x288ebcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288ec0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x288ec0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288ec4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x288ec4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288ec8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x288ec8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288ecc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x288eccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288ed0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x288ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288ed4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x288ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288ed8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x288ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288edc: 0x3e00008  jr          $ra
    ctx->pc = 0x288EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EDCu;
        // 0x288ee0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288EE4u;
    // 0x288ee4: 0x0  nop
    ctx->pc = 0x288ee4u;
    // NOP
}
