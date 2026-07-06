#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210D58
// Address: 0x210d58 - 0x2110c0
void sub_00210D58_0x210d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210D58_0x210d58");
#endif

    switch (ctx->pc) {
        case 0x210d90u: goto label_210d90;
        case 0x210e30u: goto label_210e30;
        case 0x210e38u: goto label_210e38;
        case 0x210e50u: goto label_210e50;
        case 0x210e9cu: goto label_210e9c;
        case 0x210ec4u: goto label_210ec4;
        case 0x210f04u: goto label_210f04;
        case 0x210f34u: goto label_210f34;
        case 0x210f3cu: goto label_210f3c;
        case 0x210f54u: goto label_210f54;
        case 0x210fa0u: goto label_210fa0;
        case 0x210fd0u: goto label_210fd0;
        case 0x210fd8u: goto label_210fd8;
        case 0x210ff8u: goto label_210ff8;
        case 0x211020u: goto label_211020;
        case 0x21106cu: goto label_21106c;
        case 0x211084u: goto label_211084;
        case 0x211090u: goto label_211090;
        case 0x2110a8u: goto label_2110a8;
        default: break;
    }

    ctx->pc = 0x210d58u;

    // 0x210d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210d5c: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x210d5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x210d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210d64: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x210d64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x210d68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210d6c: 0x24e7fe78  addiu       $a3, $a3, -0x188
    ctx->pc = 0x210d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966904));
    // 0x210d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x210d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210d78: 0x25f101e8  addiu       $s1, $t7, 0x1E8
    ctx->pc = 0x210d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 488));
    // 0x210d7c: 0x24050416  addiu       $a1, $zero, 0x416
    ctx->pc = 0x210d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x210d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d84: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x210d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210d88: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x210D88u;
    SET_GPR_U32(ctx, 31, 0x210D90u);
    ctx->pc = 0x210D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210D88u;
            // 0x210d8c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210D90u; }
        if (ctx->pc != 0x210D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210D90u; }
        if (ctx->pc != 0x210D90u) { return; }
    }
    ctx->pc = 0x210D90u;
label_210d90:
    // 0x210d90: 0x8e0a0024  lw          $t2, 0x24($s0)
    ctx->pc = 0x210d90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x210d94: 0x254fffff  addiu       $t7, $t2, -0x1
    ctx->pc = 0x210d94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x210d98: 0x2def0003  sltiu       $t7, $t7, 0x3
    ctx->pc = 0x210d98u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x210d9c: 0x55e0000d  bnel        $t7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x210D9Cu;
    {
        const bool branch_taken_0x210d9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x210d9c) {
            ctx->pc = 0x210DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210D9Cu;
            // 0x210da0: 0x820f002a  lb          $t7, 0x2A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210DD4u;
            goto label_210dd4;
        }
    }
    ctx->pc = 0x210DA4u;
    // 0x210da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210da8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210dac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210db0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210db4: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x210db4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210dbc: 0x25290200  addiu       $t1, $t1, 0x200
    ctx->pc = 0x210dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
    // 0x210dc0: 0x2405041d  addiu       $a1, $zero, 0x41D
    ctx->pc = 0x210dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1053));
    // 0x210dc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210dc8: 0x2408d8ee  addiu       $t0, $zero, -0x2712
    ctx->pc = 0x210dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x210dcc: 0x8084408  j           func_211020
    ctx->pc = 0x210DCCu;
    ctx->pc = 0x210DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210DCCu;
            // 0x210dd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    goto label_211020;
    ctx->pc = 0x210DD4u;
label_210dd4:
    // 0x210dd4: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x210DD4u;
    {
        const bool branch_taken_0x210dd4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210DD4u;
            // 0x210dd8: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dd4) {
            ctx->pc = 0x210E0Cu;
            goto label_210e0c;
        }
    }
    ctx->pc = 0x210DDCu;
    // 0x210ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210de4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210dec: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x210decu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x210df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210df4: 0x2529fc90  addiu       $t1, $t1, -0x370
    ctx->pc = 0x210df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966416));
    // 0x210df8: 0x24050421  addiu       $a1, $zero, 0x421
    ctx->pc = 0x210df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x210dfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e00: 0x2408d8ee  addiu       $t0, $zero, -0x2712
    ctx->pc = 0x210e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x210e04: 0x8084408  j           func_211020
    ctx->pc = 0x210E04u;
    ctx->pc = 0x210E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210E04u;
            // 0x210e08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211020u;
    goto label_211020;
    ctx->pc = 0x210E0Cu;
label_210e0c:
    // 0x210e0c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x210e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x210e10: 0xa1e0a93a  sb          $zero, -0x56C6($t7)
    ctx->pc = 0x210e10u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294945082), (uint8_t)GPR_U32(ctx, 0));
    // 0x210e14: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x210e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x210e18: 0x960e0028  lhu         $t6, 0x28($s0)
    ctx->pc = 0x210e18u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x210e1c: 0x240f0204  addiu       $t7, $zero, 0x204
    ctx->pc = 0x210e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x210e20: 0x15cf000b  bne         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x210E20u;
    {
        const bool branch_taken_0x210e20 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x210E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E20u;
            // 0x210e24: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e20) {
            ctx->pc = 0x210E50u;
            goto label_210e50;
        }
    }
    ctx->pc = 0x210E28u;
    // 0x210e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x210e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210e30:
    // 0x210e30: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x210E30u;
    SET_GPR_U32(ctx, 31, 0x210E38u);
    ctx->pc = 0x20F230u;
    if (runtime->hasFunction(0x20F230u)) {
        auto targetFn = runtime->lookupFunction(0x20F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E38u; }
        if (ctx->pc != 0x210E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F230_0x20f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E38u; }
        if (ctx->pc != 0x210E38u) { return; }
    }
    ctx->pc = 0x210E38u;
label_210e38:
    // 0x210e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210e48: 0x3e00008  jr          $ra
    ctx->pc = 0x210E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E48u;
            // 0x210e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210E50u;
label_210e50:
    // 0x210e50: 0x554f0004  bnel        $t2, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x210E50u;
    {
        const bool branch_taken_0x210e50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        if (branch_taken_0x210e50) {
            ctx->pc = 0x210E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210E50u;
            // 0x210e54: 0x920f0028  lbu         $t7, 0x28($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210E64u;
            goto label_210e64;
        }
    }
    ctx->pc = 0x210E58u;
    // 0x210e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e5c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x210E5Cu;
    {
        const bool branch_taken_0x210e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E5Cu;
            // 0x210e60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e5c) {
            ctx->pc = 0x210E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210e30;
        }
    }
    ctx->pc = 0x210E64u;
label_210e64:
    // 0x210e64: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x210e64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x210e68: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x210e68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x210e6c: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x210e6cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x210e70: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x210E70u;
    {
        const bool branch_taken_0x210e70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E70u;
            // 0x210e74: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e70) {
            ctx->pc = 0x210E80u;
            goto label_210e80;
        }
    }
    ctx->pc = 0x210E78u;
    // 0x210e78: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x210e78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x210e7c: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x210e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
label_210e80:
    // 0x210e80: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x210e80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x210e84: 0x51e00009  beql        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x210E84u;
    {
        const bool branch_taken_0x210e84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x210e84) {
            ctx->pc = 0x210E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210E84u;
            // 0x210e88: 0x8e0f001c  lw          $t7, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210EACu;
            goto label_210eac;
        }
    }
    ctx->pc = 0x210E8Cu;
    // 0x210e8c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x210e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x210e90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210e94: 0xc089e80  jal         func_227A00
    ctx->pc = 0x210E94u;
    SET_GPR_U32(ctx, 31, 0x210E9Cu);
    ctx->pc = 0x210E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210E94u;
            // 0x210e98: 0x2484fbb8  addiu       $a0, $a0, -0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    if (runtime->hasFunction(0x227A00u)) {
        auto targetFn = runtime->lookupFunction(0x227A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E9Cu; }
        if (ctx->pc != 0x210E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227A00_0x227a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E9Cu; }
        if (ctx->pc != 0x210E9Cu) { return; }
    }
    ctx->pc = 0x210E9Cu;
label_210e9c:
    // 0x210e9c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x210e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x210ea0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x210ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x210ea4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x210ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x210ea8: 0x8e0f001c  lw          $t7, 0x1C($s0)
    ctx->pc = 0x210ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_210eac:
    // 0x210eac: 0x51e00009  beql        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x210EACu;
    {
        const bool branch_taken_0x210eac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x210eac) {
            ctx->pc = 0x210EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210EACu;
            // 0x210eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210ED4u;
            goto label_210ed4;
        }
    }
    ctx->pc = 0x210EB4u;
    // 0x210eb4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x210eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x210eb8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x210eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x210ebc: 0xc089e80  jal         func_227A00
    ctx->pc = 0x210EBCu;
    SET_GPR_U32(ctx, 31, 0x210EC4u);
    ctx->pc = 0x210EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210EBCu;
            // 0x210ec0: 0x2484fbc8  addiu       $a0, $a0, -0x438 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    if (runtime->hasFunction(0x227A00u)) {
        auto targetFn = runtime->lookupFunction(0x227A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210EC4u; }
        if (ctx->pc != 0x210EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227A00_0x227a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210EC4u; }
        if (ctx->pc != 0x210EC4u) { return; }
    }
    ctx->pc = 0x210EC4u;
label_210ec4:
    // 0x210ec4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x210ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x210ec8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x210ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x210ecc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x210eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x210ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210ed4:
    // 0x210ed4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x210ED4u;
    {
        const bool branch_taken_0x210ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210ED4u;
            // 0x210ed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ed4) {
            ctx->pc = 0x210E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210e30;
        }
    }
    ctx->pc = 0x210EDCu;
    // 0x210edc: 0x0  nop
    ctx->pc = 0x210edcu;
    // NOP
    // 0x210ee0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x210ee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x210ee4: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x210EE4u;
    {
        const bool branch_taken_0x210ee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x210EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210EE4u;
            // 0x210ee8: 0x248b0004  addiu       $t3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ee4) {
            ctx->pc = 0x210F3Cu;
            goto label_210f3c;
        }
    }
    ctx->pc = 0x210EECu;
    // 0x210eec: 0x8c8e0004  lw          $t6, 0x4($a0)
    ctx->pc = 0x210eecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x210ef0: 0x95cf0000  lhu         $t7, 0x0($t6)
    ctx->pc = 0x210ef0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x210ef4: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x210EF4u;
    {
        const bool branch_taken_0x210ef4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x210EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210EF4u;
            // 0x210ef8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ef4) {
            ctx->pc = 0x210F34u;
            goto label_210f34;
        }
    }
    ctx->pc = 0x210EFCu;
    // 0x210efc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x210efcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f00: 0x18b7821  addu        $t7, $t4, $t3
    ctx->pc = 0x210f00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_210f04:
    // 0x210f04: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x210f04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210f08: 0x95ee0000  lhu         $t6, 0x0($t7)
    ctx->pc = 0x210f08u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210f0c: 0x51c50001  beql        $t6, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x210F0Cu;
    {
        const bool branch_taken_0x210f0c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 5));
        if (branch_taken_0x210f0c) {
            ctx->pc = 0x210F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210F0Cu;
            // 0x210f10: 0xade60014  sw          $a2, 0x14($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210F14u;
            goto label_210f14;
        }
    }
    ctx->pc = 0x210F14u;
label_210f14:
    // 0x210f14: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x210f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x210f18: 0xa7880  sll         $t7, $t2, 2
    ctx->pc = 0x210f18u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x210f1c: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x210f1cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f20: 0x1eb7021  addu        $t6, $t7, $t3
    ctx->pc = 0x210f20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x210f24: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x210f24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x210f28: 0x95ed0000  lhu         $t5, 0x0($t7)
    ctx->pc = 0x210f28u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210f2c: 0x55a0fff5  bnel        $t5, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x210F2Cu;
    {
        const bool branch_taken_0x210f2c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x210f2c) {
            ctx->pc = 0x210F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210F2Cu;
            // 0x210f30: 0x18b7821  addu        $t7, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210F04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210f04;
        }
    }
    ctx->pc = 0x210F34u;
label_210f34:
    // 0x210f34: 0x3e00008  jr          $ra
    ctx->pc = 0x210F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F34u;
            // 0x210f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210F3Cu;
label_210f3c:
    // 0x210f3c: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x210f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x210f40: 0x95ee0000  lhu         $t6, 0x0($t7)
    ctx->pc = 0x210f40u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210f44: 0x11c0fffb  beqz        $t6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x210F44u;
    {
        const bool branch_taken_0x210f44 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x210f44) {
            ctx->pc = 0x210F34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210f34;
        }
    }
    ctx->pc = 0x210F4Cu;
    // 0x210f4c: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x210f4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f50: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_210f54:
    // 0x210f54: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x210f54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x210f58: 0x95ee0000  lhu         $t6, 0x0($t7)
    ctx->pc = 0x210f58u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210f5c: 0x0  nop
    ctx->pc = 0x210f5cu;
    // NOP
    // 0x210f60: 0x0  nop
    ctx->pc = 0x210f60u;
    // NOP
    // 0x210f64: 0x0  nop
    ctx->pc = 0x210f64u;
    // NOP
    // 0x210f68: 0x55c0fffa  bnel        $t6, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x210F68u;
    {
        const bool branch_taken_0x210f68 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x210f68) {
            ctx->pc = 0x210F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210F68u;
            // 0x210f6c: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210F54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210f54;
        }
    }
    ctx->pc = 0x210F70u;
    // 0x210f70: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x210F70u;
    {
        const bool branch_taken_0x210f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F70u;
            // 0x210f74: 0xac060014  sw          $a2, 0x14($zero) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 0), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f70) {
            ctx->pc = 0x210F34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210f34;
        }
    }
    ctx->pc = 0x210F78u;
    // 0x210f78: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x210F78u;
    {
        const bool branch_taken_0x210f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F78u;
            // 0x210f7c: 0x248b0004  addiu       $t3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f78) {
            ctx->pc = 0x210FD8u;
            goto label_210fd8;
        }
    }
    ctx->pc = 0x210F80u;
    // 0x210f80: 0x8c8e0004  lw          $t6, 0x4($a0)
    ctx->pc = 0x210f80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x210f84: 0x95cf0000  lhu         $t7, 0x0($t6)
    ctx->pc = 0x210f84u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x210f88: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x210F88u;
    {
        const bool branch_taken_0x210f88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210F88u;
            // 0x210f8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f88) {
            ctx->pc = 0x210FD0u;
            goto label_210fd0;
        }
    }
    ctx->pc = 0x210F90u;
    // 0x210f90: 0x24090258  addiu       $t1, $zero, 0x258
    ctx->pc = 0x210f90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x210f94: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x210f94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f98: 0xc6480b  movn        $t1, $a2, $a2
    ctx->pc = 0x210f98u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x210f9c: 0x18b7821  addu        $t7, $t4, $t3
    ctx->pc = 0x210f9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_210fa0:
    // 0x210fa0: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x210fa0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210fa4: 0x95ee0000  lhu         $t6, 0x0($t7)
    ctx->pc = 0x210fa4u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210fa8: 0x51c50001  beql        $t6, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x210FA8u;
    {
        const bool branch_taken_0x210fa8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 5));
        if (branch_taken_0x210fa8) {
            ctx->pc = 0x210FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210FA8u;
            // 0x210fac: 0xade90010  sw          $t1, 0x10($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210FB0u;
            goto label_210fb0;
        }
    }
    ctx->pc = 0x210FB0u;
label_210fb0:
    // 0x210fb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x210fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x210fb4: 0xa7880  sll         $t7, $t2, 2
    ctx->pc = 0x210fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x210fb8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x210fb8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fbc: 0x1eb7021  addu        $t6, $t7, $t3
    ctx->pc = 0x210fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x210fc0: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x210fc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x210fc4: 0x95ed0000  lhu         $t5, 0x0($t7)
    ctx->pc = 0x210fc4u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210fc8: 0x55a0fff5  bnel        $t5, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x210FC8u;
    {
        const bool branch_taken_0x210fc8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x210fc8) {
            ctx->pc = 0x210FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210FC8u;
            // 0x210fcc: 0x18b7821  addu        $t7, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210fa0;
        }
    }
    ctx->pc = 0x210FD0u;
label_210fd0:
    // 0x210fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x210FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210FD0u;
            // 0x210fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210FD8u;
label_210fd8:
    // 0x210fd8: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x210fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x210fdc: 0x95ee0000  lhu         $t6, 0x0($t7)
    ctx->pc = 0x210fdcu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x210fe0: 0x11c0fffb  beqz        $t6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x210FE0u;
    {
        const bool branch_taken_0x210fe0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x210fe0) {
            ctx->pc = 0x210FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210fd0;
        }
    }
    ctx->pc = 0x210FE8u;
    // 0x210fe8: 0x240c0258  addiu       $t4, $zero, 0x258
    ctx->pc = 0x210fe8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x210fec: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x210fecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ff0: 0xc6600b  movn        $t4, $a2, $a2
    ctx->pc = 0x210ff0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 6));
    // 0x210ff4: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x210ff4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_210ff8:
    // 0x210ff8: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x210ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x210ffc: 0x95ee0000  lhu         $t6, 0x0($t7)
    ctx->pc = 0x210ffcu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x211000: 0x0  nop
    ctx->pc = 0x211000u;
    // NOP
    // 0x211004: 0x0  nop
    ctx->pc = 0x211004u;
    // NOP
    // 0x211008: 0x0  nop
    ctx->pc = 0x211008u;
    // NOP
    // 0x21100c: 0x55c0fffa  bnel        $t6, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21100Cu;
    {
        const bool branch_taken_0x21100c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x21100c) {
            ctx->pc = 0x211010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21100Cu;
            // 0x211010: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210ff8;
        }
    }
    ctx->pc = 0x211014u;
    // 0x211014: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x211014u;
    {
        const bool branch_taken_0x211014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211014u;
            // 0x211018: 0xac0c0010  sw          $t4, 0x10($zero) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 0), 16), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211014) {
            ctx->pc = 0x210FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210fd0;
        }
    }
    ctx->pc = 0x21101Cu;
    // 0x21101c: 0x0  nop
    ctx->pc = 0x21101cu;
    // NOP
label_211020:
    // 0x211020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211024: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211024u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21102c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21102cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x211030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x211034: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x211034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211038: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x211038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21103c: 0x8deef1c4  lw          $t6, -0xE3C($t7)
    ctx->pc = 0x21103cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963652)));
    // 0x211040: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x211040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211044: 0xffa90018  sd          $t1, 0x18($sp)
    ctx->pc = 0x211044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 9));
    // 0x211048: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21104c: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x21104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x211050: 0x29ce0003  slti        $t6, $t6, 0x3
    ctx->pc = 0x211050u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211054: 0xffab0028  sd          $t3, 0x28($sp)
    ctx->pc = 0x211054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 11));
    // 0x211058: 0x15c0000d  bnez        $t6, . + 4 + (0xD << 2)
    ctx->pc = 0x211058u;
    {
        const bool branch_taken_0x211058 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x21105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211058u;
            // 0x21105c: 0xade8f1c0  sw          $t0, -0xE40($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963648), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211058) {
            ctx->pc = 0x211090u;
            goto label_211090;
        }
    }
    ctx->pc = 0x211060u;
    // 0x211060: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211064: 0xc043e52  jal         func_10F948
    ctx->pc = 0x211064u;
    SET_GPR_U32(ctx, 31, 0x21106Cu);
    ctx->pc = 0x211068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211064u;
            // 0x211068: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21106Cu; }
        if (ctx->pc != 0x21106Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21106Cu; }
        if (ctx->pc != 0x21106Cu) { return; }
    }
    ctx->pc = 0x21106Cu;
label_21106c:
    // 0x21106c: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x21106cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211070: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x211070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x211074: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x211074u;
    {
        const bool branch_taken_0x211074 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x211078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211074u;
            // 0x211078: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211074) {
            ctx->pc = 0x211084u;
            goto label_211084;
        }
    }
    ctx->pc = 0x21107Cu;
    // 0x21107c: 0xc043e36  jal         func_10F8D8
    ctx->pc = 0x21107Cu;
    SET_GPR_U32(ctx, 31, 0x211084u);
    ctx->pc = 0x10F8D8u;
    if (runtime->hasFunction(0x10F8D8u)) {
        auto targetFn = runtime->lookupFunction(0x10F8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211084u; }
        if (ctx->pc != 0x211084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F8D8_0x10f8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211084u; }
        if (ctx->pc != 0x211084u) { return; }
    }
    ctx->pc = 0x211084u;
label_211084:
    // 0x211084: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211088: 0xc043e52  jal         func_10F948
    ctx->pc = 0x211088u;
    SET_GPR_U32(ctx, 31, 0x211090u);
    ctx->pc = 0x21108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211088u;
            // 0x21108c: 0x24840238  addiu       $a0, $a0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211090u; }
        if (ctx->pc != 0x211090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211090u; }
        if (ctx->pc != 0x211090u) { return; }
    }
    ctx->pc = 0x211090u;
label_211090:
    // 0x211090: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x211090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x211094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21109c: 0x3e00008  jr          $ra
    ctx->pc = 0x21109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2110A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21109Cu;
            // 0x2110a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2110A4u;
    // 0x2110a4: 0x0  nop
    ctx->pc = 0x2110a4u;
    // NOP
label_2110a8:
    // 0x2110a8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2110a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2110ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2110acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2110b0: 0xa1e4a938  sb          $a0, -0x56C8($t7)
    ctx->pc = 0x2110b0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294945080), (uint8_t)GPR_U32(ctx, 4));
    // 0x2110b4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2110b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2110b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2110B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2110BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2110B8u;
            // 0x2110bc: 0xa1e5a939  sb          $a1, -0x56C7($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 4294945081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2110C0u;
    ctx->pc = 0x2110c0u;
}
