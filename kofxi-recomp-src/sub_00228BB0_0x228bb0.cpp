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

// Function: sub_00228BB0
// Address: 0x228bb0 - 0x228db8
void sub_00228BB0_0x228bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228BB0_0x228bb0");
#endif

    switch (ctx->pc) {
        case 0x228c00u: goto label_228c00;
        case 0x228c68u: goto label_228c68;
        case 0x228cc8u: goto label_228cc8;
        case 0x228d24u: goto label_228d24;
        case 0x228d88u: goto label_228d88;
        default: break;
    }

    ctx->pc = 0x228bb0u;

    // 0x228bb0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x228bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x228bb4: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x228bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x228bb8: 0x8c62a72c  lw          $v0, -0x58D4($v1)
    ctx->pc = 0x228bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944556)));
    // 0x228bbc: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x228bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x228bc0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x228bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x228bc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x228bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x228bc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x228bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228bd0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x228bd0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x228bd4: 0x8ca5a750  lw          $a1, -0x58B0($a1)
    ctx->pc = 0x228bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944592)));
    // 0x228bd8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x228bd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228bdc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x228bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x228be0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228be4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x228be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x228be8: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x228be8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x228bec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x228becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x228bf0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x228bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x228bf4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x228bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x228bf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x228bfc: 0x3c1501c1  lui         $s5, 0x1C1
    ctx->pc = 0x228bfcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)449 << 16));
label_228c00:
    // 0x228c00: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x228C00u;
    {
        const bool branch_taken_0x228c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C00u;
        // 0x228c04: 0x8ea7a728  lw          $a3, -0x58D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c00) {
            ctx->pc = 0x228C58u;
            goto label_228c58;
        }
    }
    ctx->pc = 0x228C08u;
    // 0x228c08: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x228c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x228c0c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x228c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x228c10: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x228C10u;
    {
        const bool branch_taken_0x228c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228c10) {
            ctx->pc = 0x228C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228C10u;
            // 0x228c14: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228c00;
        }
    }
    ctx->pc = 0x228C18u;
    // 0x228c18: 0x1470000a  bne         $v1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x228C18u;
    {
        const bool branch_taken_0x228c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x228C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C18u;
        // 0x228c1c: 0x8cb10008  lw          $s1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c18) {
            ctx->pc = 0x228C44u;
            goto label_228c44;
        }
    }
    ctx->pc = 0x228C20u;
    // 0x228c20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x228c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228c24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x228C24u;
    {
        const bool branch_taken_0x228c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C24u;
        // 0x228c28: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c24) {
            ctx->pc = 0x228C38u;
            goto label_228c38;
        }
    }
    ctx->pc = 0x228C2Cu;
    // 0x228c2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x228c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x228c30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x228c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228c34: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x228c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_228c38:
    // 0x228c38: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x228c38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x228C3Cu;
    {
        const bool branch_taken_0x228c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C3Cu;
        // 0x228c40: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c3c) {
            ctx->pc = 0x228C54u;
            goto label_228c54;
        }
    }
    ctx->pc = 0x228C44u;
label_228c44:
    // 0x228c44: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x228c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x228c48: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x228c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x228c4c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x228c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x228c50: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x228c50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_228c54:
    // 0x228c54: 0x8ea7a728  lw          $a3, -0x58D8($s5)
    ctx->pc = 0x228c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944552)));
label_228c58:
    // 0x228c58: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x228C58u;
    {
        const bool branch_taken_0x228c58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x228C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C58u;
        // 0x228c5c: 0xf08006  srlv        $s0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c58) {
            ctx->pc = 0x228C74u;
            goto label_228c74;
        }
    }
    ctx->pc = 0x228C60u;
    // 0x228c60: 0xc08a2ce  jal         func_228B38
    ctx->pc = 0x228C60u;
    SET_GPR_U32(ctx, 31, 0x228C68u);
    ctx->pc = 0x228C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C60u;
    // 0x228c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228B38u, 0x228C60u, 0x228C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C68u;
label_228c68:
    // 0x228c68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x228c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c6c: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x228C6Cu;
    {
        const bool branch_taken_0x228c6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C6Cu;
        // 0x228c70: 0x8ea7a728  lw          $a3, -0x58D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c6c) {
            ctx->pc = 0x228D64u;
            goto label_228d64;
        }
    }
    ctx->pc = 0x228C74u;
label_228c74:
    // 0x228c74: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x228c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x228c78: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x228c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x228c7c: 0x8c62a73c  lw          $v0, -0x58C4($v1)
    ctx->pc = 0x228c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944572)));
    // 0x228c80: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x228c80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x228c84: 0x8c85a740  lw          $a1, -0x58C0($a0)
    ctx->pc = 0x228c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944576)));
    // 0x228c88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228c8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x228c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x228c90: 0x8d04a748  lw          $a0, -0x58B8($t0)
    ctx->pc = 0x228c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294944584)));
    // 0x228c94: 0xe21006  srlv        $v0, $v0, $a3
    ctx->pc = 0x228c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x228c98: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x228c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x228c9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228ca0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x228ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x228ca4: 0xf0182b  sltu        $v1, $a3, $s0
    ctx->pc = 0x228ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x228ca8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x228ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x228cac: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x228CACu;
    {
        const bool branch_taken_0x228cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x228CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CACu;
        // 0x228cb0: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228cac) {
            ctx->pc = 0x228CF4u;
            goto label_228cf4;
        }
    }
    ctx->pc = 0x228CB4u;
    // 0x228cb4: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x228cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x228cb8: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x228cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x228cbc: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x228cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x228cc0: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x228cc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x228cc4: 0x3c1601c1  lui         $s6, 0x1C1
    ctx->pc = 0x228cc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)449 << 16));
label_228cc8:
    // 0x228cc8: 0x8d02a748  lw          $v0, -0x58B8($t0)
    ctx->pc = 0x228cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294944584)));
    // 0x228ccc: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x228cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x228cd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228cd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x228cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228cd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228cdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x228cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x228ce0: 0xf0102b  sltu        $v0, $a3, $s0
    ctx->pc = 0x228ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x228ce4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x228CE4u;
    {
        const bool branch_taken_0x228ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CE4u;
        // 0x228ce8: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ce4) {
            ctx->pc = 0x228CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228cc8;
        }
    }
    ctx->pc = 0x228CECu;
    // 0x228cec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x228CECu;
    {
        const bool branch_taken_0x228cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CECu;
        // 0x228cf0: 0x8cc2a77c  lw          $v0, -0x5884($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228cec) {
            ctx->pc = 0x228D0Cu;
            goto label_228d0c;
        }
    }
    ctx->pc = 0x228CF4u;
label_228cf4:
    // 0x228cf4: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x228cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x228cf8: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x228cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x228cfc: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x228cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x228d00: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x228d00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x228d04: 0x3c1601c1  lui         $s6, 0x1C1
    ctx->pc = 0x228d04u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)449 << 16));
    // 0x228d08: 0x8cc2a77c  lw          $v0, -0x5884($a2)
    ctx->pc = 0x228d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944636)));
label_228d0c:
    // 0x228d0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228D0Cu;
    {
        const bool branch_taken_0x228d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D0Cu;
        // 0x228d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d0c) {
            ctx->pc = 0x228D24u;
            goto label_228d24;
        }
    }
    ctx->pc = 0x228D14u;
    // 0x228d14: 0x8ea6a728  lw          $a2, -0x58D8($s5)
    ctx->pc = 0x228d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944552)));
    // 0x228d18: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x228d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x228d1c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x228D1Cu;
    SET_GPR_U32(ctx, 31, 0x228D24u);
    ctx->pc = 0x228D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D1Cu;
    // 0x228d20: 0xd03004  sllv        $a2, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 6) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x228D1Cu, 0x228D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D24u;
label_228d24:
    // 0x228d24: 0x8e43a798  lw          $v1, -0x5868($s2)
    ctx->pc = 0x228d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944664)));
    // 0x228d28: 0x8e62a7a0  lw          $v0, -0x5860($s3)
    ctx->pc = 0x228d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944672)));
    // 0x228d2c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x228d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x228d30: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x228d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x228d34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228D34u;
    {
        const bool branch_taken_0x228d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D34u;
        // 0x228d38: 0xae44a798  sw          $a0, -0x5868($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294944664), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d34) {
            ctx->pc = 0x228D50u;
            goto label_228d50;
        }
    }
    ctx->pc = 0x228D3Cu;
    // 0x228d3c: 0x8e82a724  lw          $v0, -0x58DC($s4)
    ctx->pc = 0x228d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944548)));
    // 0x228d40: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x228d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x228d44: 0xae64a7a0  sw          $a0, -0x5860($s3)
    ctx->pc = 0x228d44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294944672), GPR_U32(ctx, 4));
    // 0x228d48: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x228d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x228d4c: 0xac62a79c  sw          $v0, -0x5864($v1)
    ctx->pc = 0x228d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944668), GPR_U32(ctx, 2));
label_228d50:
    // 0x228d50: 0x8e82a724  lw          $v0, -0x58DC($s4)
    ctx->pc = 0x228d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944548)));
    // 0x228d54: 0x8ec3a794  lw          $v1, -0x586C($s6)
    ctx->pc = 0x228d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944660)));
    // 0x228d58: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x228d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x228d5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228d60: 0xaec3a794  sw          $v1, -0x586C($s6)
    ctx->pc = 0x228d60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294944660), GPR_U32(ctx, 3));
label_228d64:
    // 0x228d64: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x228D64u;
    {
        const bool branch_taken_0x228d64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D64u;
        // 0x228d68: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d64) {
            ctx->pc = 0x228D88u;
            goto label_228d88;
        }
    }
    ctx->pc = 0x228D6Cu;
    // 0x228d6c: 0x8c62a780  lw          $v0, -0x5880($v1)
    ctx->pc = 0x228d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944640)));
    // 0x228d70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228D70u;
    {
        const bool branch_taken_0x228d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228d70) {
            ctx->pc = 0x228D80u;
            goto label_228d80;
        }
    }
    ctx->pc = 0x228D78u;
    // 0x228d78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x228D78u;
    {
        const bool branch_taken_0x228d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D78u;
        // 0x228d7c: 0xac77a780  sw          $s7, -0x5880($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944640), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d78) {
            ctx->pc = 0x228D88u;
            goto label_228d88;
        }
    }
    ctx->pc = 0x228D80u;
label_228d80:
    // 0x228d80: 0xc08a534  jal         func_2294D0
    ctx->pc = 0x228D80u;
    SET_GPR_U32(ctx, 31, 0x228D88u);
    ctx->pc = 0x228D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D80u;
    // 0x228d84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2294D0u, 0x228D80u, 0x228D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D88u;
label_228d88:
    // 0x228d88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x228d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x228d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228d90: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x228d90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228d94: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x228d94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228d98: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x228d98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228d9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x228d9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228da0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x228da0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228da4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228da8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228db0: 0x3e00008  jr          $ra
    ctx->pc = 0x228DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DB0u;
        // 0x228db4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228DB8u;
}
