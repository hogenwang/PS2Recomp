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

// Function: sub_00280AE8
// Address: 0x280ae8 - 0x280cc0
void sub_00280AE8_0x280ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280AE8_0x280ae8");
#endif

    switch (ctx->pc) {
        case 0x280b68u: goto label_280b68;
        case 0x280ba8u: goto label_280ba8;
        case 0x280bdcu: goto label_280bdc;
        case 0x280be8u: goto label_280be8;
        case 0x280bfcu: goto label_280bfc;
        case 0x280c18u: goto label_280c18;
        case 0x280c40u: goto label_280c40;
        case 0x280c48u: goto label_280c48;
        case 0x280c60u: goto label_280c60;
        default: break;
    }

    ctx->pc = 0x280ae8u;

    // 0x280ae8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x280ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x280aec: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x280aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x280af0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x280af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x280af4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x280af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280af8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x280af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x280afc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x280afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b00: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x280b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x280b04: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x280b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x280b08: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x280b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x280b0c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x280b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x280b10: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x280b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x280b14: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x280b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x280b18: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x280B18u;
    {
        const bool branch_taken_0x280b18 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x280B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B18u;
        // 0x280b1c: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b18) {
            ctx->pc = 0x280B28u;
            goto label_280b28;
        }
    }
    ctx->pc = 0x280B20u;
    // 0x280b20: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x280B20u;
    {
        const bool branch_taken_0x280b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B20u;
        // 0x280b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b20) {
            ctx->pc = 0x280C8Cu;
            goto label_280c8c;
        }
    }
    ctx->pc = 0x280B28u;
label_280b28:
    // 0x280b28: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280B28u;
    {
        const bool branch_taken_0x280b28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x280b28) {
            ctx->pc = 0x280B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280B28u;
            // 0x280b2c: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280B40u;
            goto label_280b40;
        }
    }
    ctx->pc = 0x280B30u;
    // 0x280b30: 0x8cd70010  lw          $s7, 0x10($a2)
    ctx->pc = 0x280b30u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x280b34: 0x56e00004  bnel        $s7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x280B34u;
    {
        const bool branch_taken_0x280b34 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x280b34) {
            ctx->pc = 0x280B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280B34u;
            // 0x280b38: 0x8cd6000c  lw          $s6, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280B48u;
            goto label_280b48;
        }
    }
    ctx->pc = 0x280B3Cu;
    // 0x280b3c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x280b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
label_280b40:
    // 0x280b40: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x280B40u;
    {
        const bool branch_taken_0x280b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B40u;
        // 0x280b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b40) {
            ctx->pc = 0x280C8Cu;
            goto label_280c8c;
        }
    }
    ctx->pc = 0x280B48u;
label_280b48:
    // 0x280b48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x280b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b4c: 0x1ac00012  blez        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x280B4Cu;
    {
        const bool branch_taken_0x280b4c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x280B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B4Cu;
        // 0x280b50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b4c) {
            ctx->pc = 0x280B98u;
            goto label_280b98;
        }
    }
    ctx->pc = 0x280B54u;
    // 0x280b54: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x280b54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x280b58: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x280b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x280b5c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x280B5Cu;
    {
        const bool branch_taken_0x280b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B5Cu;
        // 0x280b60: 0x3051007f  andi        $s1, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b5c) {
            ctx->pc = 0x280B98u;
            goto label_280b98;
        }
    }
    ctx->pc = 0x280B64u;
    // 0x280b64: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x280b64u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_280b68:
    // 0x280b68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x280b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x280b6c: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x280b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x280b70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280B70u;
    {
        const bool branch_taken_0x280b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B70u;
        // 0x280b74: 0x1189f8  dsll        $s1, $s1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b70) {
            ctx->pc = 0x280B9Cu;
            goto label_280b9c;
        }
    }
    ctx->pc = 0x280B78u;
    // 0x280b78: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x280b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x280b7c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x280b7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280b80: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x280b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x280b84: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x280b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x280b88: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x280B88u;
    {
        const bool branch_taken_0x280b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B88u;
        // 0x280b8c: 0x2248825  or          $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b88) {
            ctx->pc = 0x280B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280b68;
        }
    }
    ctx->pc = 0x280B90u;
    // 0x280b90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x280B90u;
    {
        const bool branch_taken_0x280b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B90u;
        // 0x280b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b90) {
            ctx->pc = 0x280BA0u;
            goto label_280ba0;
        }
    }
    ctx->pc = 0x280B98u;
label_280b98:
    // 0x280b98: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x280b98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_280b9c:
    // 0x280b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280ba0:
    // 0x280ba0: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x280BA0u;
    SET_GPR_U32(ctx, 31, 0x280BA8u);
    ctx->pc = 0x280BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BA0u;
    // 0x280ba4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x280BA0u, 0x280BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BA8u;
label_280ba8:
    // 0x280ba8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x280ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x280bac: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x280bacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x280bb0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x280bb0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x280bb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x280bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280bb8: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x280bb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280bbc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x280bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x280bc0: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x280bc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x280bc4: 0x26a5a5d8  addiu       $a1, $s5, -0x5A28
    ctx->pc = 0x280bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944216));
    // 0x280bc8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x280bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x280bcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bd4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x280BD4u;
    SET_GPR_U32(ctx, 31, 0x280BDCu);
    ctx->pc = 0x280BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BD4u;
    // 0x280bd8: 0x222382f  dsubu       $a3, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x280BD4u, 0x280BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BDCu;
label_280bdc:
    // 0x280bdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x280bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280be0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x280BE0u;
    SET_GPR_U32(ctx, 31, 0x280BE8u);
    ctx->pc = 0x280BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BE0u;
    // 0x280be4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x280BE0u, 0x280BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BE8u;
label_280be8:
    // 0x280be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x280bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bf4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x280BF4u;
    SET_GPR_U32(ctx, 31, 0x280BFCu);
    ctx->pc = 0x280BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BF4u;
    // 0x280bf8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x280BF4u, 0x280BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BFCu;
label_280bfc:
    // 0x280bfc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x280bfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c00: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x280c00u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x280c04: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x280c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x280c08: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x280C08u;
    {
        const bool branch_taken_0x280c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C08u;
        // 0x280c0c: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c08) {
            ctx->pc = 0x280C80u;
            goto label_280c80;
        }
    }
    ctx->pc = 0x280C10u;
    // 0x280c10: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x280c10u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x280c14: 0x0  nop
    ctx->pc = 0x280c14u;
    // NOP
label_280c18:
    // 0x280c18: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x280c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x280c1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x280c1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280c20: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x280c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x280c24: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x280c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x280c28: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x280C28u;
    {
        const bool branch_taken_0x280c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C28u;
        // 0x280c2c: 0x2248825  or          $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c28) {
            ctx->pc = 0x280C70u;
            goto label_280c70;
        }
    }
    ctx->pc = 0x280C30u;
    // 0x280c30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x280c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c38: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x280C38u;
    SET_GPR_U32(ctx, 31, 0x280C40u);
    ctx->pc = 0x280C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280C38u;
    // 0x280c3c: 0x27c5a5e0  addiu       $a1, $fp, -0x5A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x280C38u, 0x280C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C40u;
label_280c40:
    // 0x280c40: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x280C40u;
    SET_GPR_U32(ctx, 31, 0x280C48u);
    ctx->pc = 0x280C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280C40u;
    // 0x280c44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x280C40u, 0x280C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C48u;
label_280c48:
    // 0x280c48: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x280C48u;
    {
        const bool branch_taken_0x280c48 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x280C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C48u;
        // 0x280c4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c48) {
            ctx->pc = 0x280C60u;
            goto label_280c60;
        }
    }
    ctx->pc = 0x280C50u;
    // 0x280c50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x280c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c58: 0xc04a966  jal         func_12A598
    ctx->pc = 0x280C58u;
    SET_GPR_U32(ctx, 31, 0x280C60u);
    ctx->pc = 0x280C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280C58u;
    // 0x280c5c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x280C58u, 0x280C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C60u;
label_280c60:
    // 0x280c60: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x280c60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x280c64: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x280c64u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x280c68: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x280c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x280c6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x280c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280c70:
    // 0x280c70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x280c70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x280c74: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x280c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x280c78: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x280C78u;
    {
        const bool branch_taken_0x280c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C78u;
        // 0x280c7c: 0x1189f8  dsll        $s1, $s1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c78) {
            ctx->pc = 0x280C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280c18;
        }
    }
    ctx->pc = 0x280C80u;
label_280c80:
    // 0x280c80: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x280c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x280c84: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x280c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c88: 0xa060ffff  sb          $zero, -0x1($v1)
    ctx->pc = 0x280c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_280c8c:
    // 0x280c8c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x280c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x280c90: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x280c90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x280c94: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x280c94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x280c98: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x280c98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x280c9c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x280c9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x280ca0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x280ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x280ca4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x280ca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280ca8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x280ca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280cac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x280cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280cb0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x280cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x280CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CB4u;
        // 0x280cb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280CBCu;
    // 0x280cbc: 0x0  nop
    ctx->pc = 0x280cbcu;
    // NOP
}
