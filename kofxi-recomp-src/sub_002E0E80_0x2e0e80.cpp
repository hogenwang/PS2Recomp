#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0E80
// Address: 0x2e0e80 - 0x2e1468
void sub_002E0E80_0x2e0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0E80_0x2e0e80");
#endif

    switch (ctx->pc) {
        case 0x2e0ec0u: goto label_2e0ec0;
        case 0x2e0ed8u: goto label_2e0ed8;
        case 0x2e0ef0u: goto label_2e0ef0;
        case 0x2e0f28u: goto label_2e0f28;
        case 0x2e0f58u: goto label_2e0f58;
        case 0x2e0fa4u: goto label_2e0fa4;
        case 0x2e0fc8u: goto label_2e0fc8;
        case 0x2e1010u: goto label_2e1010;
        case 0x2e1038u: goto label_2e1038;
        case 0x2e1074u: goto label_2e1074;
        case 0x2e1084u: goto label_2e1084;
        case 0x2e1090u: goto label_2e1090;
        case 0x2e10c0u: goto label_2e10c0;
        case 0x2e10c8u: goto label_2e10c8;
        case 0x2e10e8u: goto label_2e10e8;
        case 0x2e1108u: goto label_2e1108;
        case 0x2e1118u: goto label_2e1118;
        case 0x2e1128u: goto label_2e1128;
        case 0x2e1148u: goto label_2e1148;
        case 0x2e1168u: goto label_2e1168;
        case 0x2e1170u: goto label_2e1170;
        case 0x2e1174u: goto label_2e1174;
        case 0x2e1178u: goto label_2e1178;
        case 0x2e1190u: goto label_2e1190;
        case 0x2e11a4u: goto label_2e11a4;
        case 0x2e11e4u: goto label_2e11e4;
        case 0x2e11fcu: goto label_2e11fc;
        case 0x2e1210u: goto label_2e1210;
        case 0x2e1228u: goto label_2e1228;
        case 0x2e122cu: goto label_2e122c;
        case 0x2e1260u: goto label_2e1260;
        case 0x2e1290u: goto label_2e1290;
        case 0x2e129cu: goto label_2e129c;
        case 0x2e12dcu: goto label_2e12dc;
        case 0x2e1300u: goto label_2e1300;
        case 0x2e1314u: goto label_2e1314;
        case 0x2e1348u: goto label_2e1348;
        case 0x2e134cu: goto label_2e134c;
        case 0x2e1370u: goto label_2e1370;
        case 0x2e1380u: goto label_2e1380;
        case 0x2e138cu: goto label_2e138c;
        case 0x2e13c4u: goto label_2e13c4;
        case 0x2e13c8u: goto label_2e13c8;
        case 0x2e13f8u: goto label_2e13f8;
        case 0x2e1400u: goto label_2e1400;
        case 0x2e1404u: goto label_2e1404;
        case 0x2e1408u: goto label_2e1408;
        case 0x2e143cu: goto label_2e143c;
        default: break;
    }

    ctx->pc = 0x2e0e80u;

    // 0x2e0e80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e0e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2e0e84: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2e0e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2e0e88: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x2e0e88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0e8c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2e0e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2e0e90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e0e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e94: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2e0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2e0e98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e0e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e0e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ea0: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2e0ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x2e0ea4: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2e0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2e0ea8: 0x10b0c0  sll         $s6, $s0, 3
    ctx->pc = 0x2e0ea8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2e0eac: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2e0eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2e0eb0: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x2e0eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x2e0eb4: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2e0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2e0eb8: 0xc0b829a  jal         func_2E0A68
    ctx->pc = 0x2E0EB8u;
    SET_GPR_U32(ctx, 31, 0x2E0EC0u);
    ctx->pc = 0x2E0EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EB8u;
            // 0x2e0ebc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A68u;
    if (runtime->hasFunction(0x2E0A68u)) {
        auto targetFn = runtime->lookupFunction(0x2E0A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EC0u; }
        if (ctx->pc != 0x2E0EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0A68_0x2e0a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EC0u; }
        if (ctx->pc != 0x2E0EC0u) { return; }
    }
    ctx->pc = 0x2E0EC0u;
label_2e0ec0:
    // 0x2e0ec0: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x2e0ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2e0ec4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2E0EC4u;
    {
        const bool branch_taken_0x2e0ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EC4u;
            // 0x2e0ec8: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ec4) {
            ctx->pc = 0x2E0FB4u;
            goto label_2e0fb4;
        }
    }
    ctx->pc = 0x2E0ECCu;
    // 0x2e0ecc: 0x2415ff80  addiu       $s5, $zero, -0x80
    ctx->pc = 0x2e0eccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2e0ed0: 0x2451003f  addiu       $s1, $v0, 0x3F
    ctx->pc = 0x2e0ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2e0ed4: 0x0  nop
    ctx->pc = 0x2e0ed4u;
    // NOP
label_2e0ed8:
    // 0x2e0ed8: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2e0ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2e0edc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E0EDCu;
    {
        const bool branch_taken_0x2e0edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EDCu;
            // 0x2e0ee0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0edc) {
            ctx->pc = 0x2E0F50u;
            goto label_2e0f50;
        }
    }
    ctx->pc = 0x2E0EE4u;
    // 0x2e0ee4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2e0ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e0ee8: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0EE8u;
    {
        const bool branch_taken_0x2e0ee8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E0EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EE8u;
            // 0x2e0eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ee8) {
            ctx->pc = 0x2E0F0Cu;
            goto label_2e0f0c;
        }
    }
    ctx->pc = 0x2E0EF0u;
label_2e0ef0:
    // 0x2e0ef0: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x2e0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2e0ef4: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x2e0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2e0ef8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e0ef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0efc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e0f00: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2e0f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2e0f04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0F04u;
    {
        const bool branch_taken_0x2e0f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F04u;
            // 0x2e0f08: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f04) {
            ctx->pc = 0x2E0EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0ef0;
        }
    }
    ctx->pc = 0x2E0F0Cu;
label_2e0f0c:
    // 0x2e0f0c: 0x1101821  addu        $v1, $t0, $s0
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2e0f10: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E0F10u;
    {
        const bool branch_taken_0x2e0f10 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2E0F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F10u;
            // 0x2e0f14: 0xa0750000  sb          $s5, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f10) {
            ctx->pc = 0x2E0F50u;
            goto label_2e0f50;
        }
    }
    ctx->pc = 0x2E0F18u;
    // 0x2e0f18: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2e0f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e0f1c: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0F1Cu;
    {
        const bool branch_taken_0x2e0f1c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2E0F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F1Cu;
            // 0x2e0f20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f1c) {
            ctx->pc = 0x2E0F50u;
            goto label_2e0f50;
        }
    }
    ctx->pc = 0x2E0F24u;
    // 0x2e0f24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e0f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e0f28:
    // 0x2e0f28: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2e0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e0f2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e0f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e0f30: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2e0f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e0f34: 0x0  nop
    ctx->pc = 0x2e0f34u;
    // NOP
    // 0x2e0f38: 0x0  nop
    ctx->pc = 0x2e0f38u;
    // NOP
    // 0x2e0f3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0F3Cu;
    {
        const bool branch_taken_0x2e0f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F3Cu;
            // 0x2e0f40: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f3c) {
            ctx->pc = 0x2E0F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0f28;
        }
    }
    ctx->pc = 0x2E0F44u;
    // 0x2e0f44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0F44u;
    {
        const bool branch_taken_0x2e0f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F44u;
            // 0x2e0f48: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f44) {
            ctx->pc = 0x2E0F54u;
            goto label_2e0f54;
        }
    }
    ctx->pc = 0x2E0F4Cu;
    // 0x2e0f4c: 0x0  nop
    ctx->pc = 0x2e0f4cu;
    // NOP
label_2e0f50:
    // 0x2e0f50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e0f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e0f54:
    // 0x2e0f54: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x2e0f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e0f58:
    // 0x2e0f58: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2e0f58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e0f5c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e0f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e0f60: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x2e0f60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2e0f64: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x2e0f64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2e0f68: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e0f6c: 0x91050003  lbu         $a1, 0x3($t0)
    ctx->pc = 0x2e0f6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x2e0f70: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2e0f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2e0f74: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e0f78: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2e0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2e0f7c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e0f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e0f80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e0f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e0f84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e0f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e0f88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2e0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2e0f8c: 0x4e1fff2  bgez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E0F8Cu;
    {
        const bool branch_taken_0x2e0f8c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2E0F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F8Cu;
            // 0x2e0f90: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f8c) {
            ctx->pc = 0x2E0F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0f58;
        }
    }
    ctx->pc = 0x2E0F94u;
    // 0x2e0f94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e0f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e0f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f9c: 0xc0b82aa  jal         func_2E0AA8
    ctx->pc = 0x2E0F9Cu;
    SET_GPR_U32(ctx, 31, 0x2E0FA4u);
    ctx->pc = 0x2E0FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F9Cu;
            // 0x2e0fa0: 0x2610ffc0  addiu       $s0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0AA8u;
    if (runtime->hasFunction(0x2E0AA8u)) {
        auto targetFn = runtime->lookupFunction(0x2E0AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FA4u; }
        if (ctx->pc != 0x2E0FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0AA8_0x2e0aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FA4u; }
        if (ctx->pc != 0x2E0FA4u) { return; }
    }
    ctx->pc = 0x2E0FA4u;
label_2e0fa4:
    // 0x2e0fa4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x2e0fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2e0fa8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2e0fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2e0fac: 0x1040ffca  beqz        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2E0FACu;
    {
        const bool branch_taken_0x2e0fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FACu;
            // 0x2e0fb0: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fac) {
            ctx->pc = 0x2E0ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0ed8;
        }
    }
    ctx->pc = 0x2E0FB4u;
label_2e0fb4:
    // 0x2e0fb4: 0x1a000032  blez        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E0FB4u;
    {
        const bool branch_taken_0x2e0fb4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E0FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FB4u;
            // 0x2e0fb8: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fb4) {
            ctx->pc = 0x2E1080u;
            goto label_2e1080;
        }
    }
    ctx->pc = 0x2E0FBCu;
    // 0x2e0fbc: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2e0fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e0fc0: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0FC0u;
    {
        const bool branch_taken_0x2e0fc0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E0FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FC0u;
            // 0x2e0fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fc0) {
            ctx->pc = 0x2E0FE4u;
            goto label_2e0fe4;
        }
    }
    ctx->pc = 0x2E0FC8u;
label_2e0fc8:
    // 0x2e0fc8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x2e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2e0fcc: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x2e0fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2e0fd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e0fd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0fd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e0fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e0fd8: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2e0fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2e0fdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0FDCu;
    {
        const bool branch_taken_0x2e0fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FDCu;
            // 0x2e0fe0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fdc) {
            ctx->pc = 0x2E0FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0fc8;
        }
    }
    ctx->pc = 0x2E0FE4u;
label_2e0fe4:
    // 0x2e0fe4: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2e0fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2e0fe8: 0x1102021  addu        $a0, $t0, $s0
    ctx->pc = 0x2e0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2e0fec: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x2e0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2e0ff0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2e0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e0ff4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0FF4u;
    {
        const bool branch_taken_0x2e0ff4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E0FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FF4u;
            // 0x2e0ff8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ff4) {
            ctx->pc = 0x2E102Cu;
            goto label_2e102c;
        }
    }
    ctx->pc = 0x2E0FFCu;
    // 0x2e0ffc: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x2e0ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e1000: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1000u;
    {
        const bool branch_taken_0x2e1000 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E1004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1000u;
            // 0x2e1004: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1000) {
            ctx->pc = 0x2E102Cu;
            goto label_2e102c;
        }
    }
    ctx->pc = 0x2E1008u;
    // 0x2e1008: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2e1008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e100c: 0x0  nop
    ctx->pc = 0x2e100cu;
    // NOP
label_2e1010:
    // 0x2e1010: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2e1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e1014: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e1014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e1018: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2e1018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e101c: 0x0  nop
    ctx->pc = 0x2e101cu;
    // NOP
    // 0x2e1020: 0x0  nop
    ctx->pc = 0x2e1020u;
    // NOP
    // 0x2e1024: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E1024u;
    {
        const bool branch_taken_0x2e1024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1024u;
            // 0x2e1028: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1024) {
            ctx->pc = 0x2E1010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1010;
        }
    }
    ctx->pc = 0x2E102Cu;
label_2e102c:
    // 0x2e102c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e102cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1030: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2e1030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1034: 0x0  nop
    ctx->pc = 0x2e1034u;
    // NOP
label_2e1038:
    // 0x2e1038: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2e1038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e103c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e103cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e1040: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x2e1040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2e1044: 0x28e6000e  slti        $a2, $a3, 0xE
    ctx->pc = 0x2e1044u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2e1048: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x2e1048u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2e104c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e1050: 0x91050003  lbu         $a1, 0x3($t0)
    ctx->pc = 0x2e1050u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x2e1054: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2e1054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2e1058: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e1058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e105c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2e105cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2e1060: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e1060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e1064: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e1064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e1068: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e106c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2e106cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2e1070: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
label_2e1074:
    if (ctx->pc == 0x2E1074u) {
        ctx->pc = 0x2E1074u;
            // 0x2e1074: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x2E1078u;
        goto label_fallthrough_0x2e1070;
    }
    ctx->pc = 0x2E1070u;
    {
        const bool branch_taken_0x2e1070 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1070u;
            // 0x2e1074: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1070) {
            ctx->pc = 0x2E1038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1038;
        }
    }
label_fallthrough_0x2e1070:
    ctx->pc = 0x2E1078u;
    // 0x2e1078: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E1078u;
    {
        const bool branch_taken_0x2e1078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E107Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1078u;
            // 0x2e107c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1078) {
            ctx->pc = 0x2E10B0u;
            goto label_2e10b0;
        }
    }
    ctx->pc = 0x2E1080u;
label_2e1080:
    // 0x2e1080: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x2e1080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2e1084:
    // 0x2e1084: 0x10100b  movn        $v0, $zero, $s0
    ctx->pc = 0x2e1084u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2e1088: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2e1088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e108c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e108cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2e1090:
    // 0x2e1090: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e1090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e1094: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e1094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e1098: 0x0  nop
    ctx->pc = 0x2e1098u;
    // NOP
    // 0x2e109c: 0x0  nop
    ctx->pc = 0x2e109cu;
    // NOP
    // 0x2e10a0: 0x0  nop
    ctx->pc = 0x2e10a0u;
    // NOP
    // 0x2e10a4: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E10A4u;
    {
        const bool branch_taken_0x2e10a4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2E10A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E10A4u;
            // 0x2e10a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10a4) {
            ctx->pc = 0x2E1090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1090;
        }
    }
    ctx->pc = 0x2E10ACu;
    // 0x2e10ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e10acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e10b0:
    // 0x2e10b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e10b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10b4: 0xafb6003c  sw          $s6, 0x3C($sp)
    ctx->pc = 0x2e10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 22));
    // 0x2e10b8: 0xc0b82aa  jal         func_2E0AA8
    ctx->pc = 0x2E10B8u;
    SET_GPR_U32(ctx, 31, 0x2E10C0u);
    ctx->pc = 0x2E10BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E10B8u;
            // 0x2e10bc: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0AA8u;
    if (runtime->hasFunction(0x2E0AA8u)) {
        auto targetFn = runtime->lookupFunction(0x2E0AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10C0u; }
        if (ctx->pc != 0x2E10C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0AA8_0x2e0aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10C0u; }
        if (ctx->pc != 0x2E10C0u) { return; }
    }
    ctx->pc = 0x2E10C0u;
label_2e10c0:
    // 0x2e10c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e10c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2e10c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e10c8:
    // 0x2e10c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e10cc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e10ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e10d0: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x2e10d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e10d4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2e10d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2e10d8: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x2e10d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e10dc: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x2e10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2e10e0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2e10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2e10e4: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2e10e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_2e10e8:
    // 0x2e10e8: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x2e10e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e10ec: 0xa2640002  sb          $a0, 0x2($s3)
    ctx->pc = 0x2e10ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e10f0: 0xa2650003  sb          $a1, 0x3($s3)
    ctx->pc = 0x2e10f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e10f4: 0x4e1fff4  bgez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E10F4u;
    {
        const bool branch_taken_0x2e10f4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2E10F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E10F4u;
            // 0x2e10f8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10f4) {
            ctx->pc = 0x2E10C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e10c8;
        }
    }
    ctx->pc = 0x2E10FCu;
    // 0x2e10fc: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2e10fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e1100: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x2e1100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e1104: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2e1104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2e1108:
    // 0x2e1108: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x2e1108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2e110c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2e110cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1110: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x2e1110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e1114: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2e1114u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2e1118:
    // 0x2e1118: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2e1118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e111c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E111Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E111Cu;
            // 0x2e1120: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1124u;
    // 0x2e1124: 0x0  nop
    ctx->pc = 0x2e1124u;
    // NOP
label_2e1128:
    // 0x2e1128: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e1128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e112c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2e112cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2e1130: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2e1130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1134: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2e1134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2e1138: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2e1138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2e113c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2e113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2e1140: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e1140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1144: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2e1144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
label_2e1148:
    // 0x2e1148: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e1148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e114c: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x2e114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x2e1150: 0x7b8c0  sll         $s7, $a3, 3
    ctx->pc = 0x2e1150u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2e1154: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2e1154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2e1158: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e1158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e115c: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x2e115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x2e1160: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2e1160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2e1164: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e1168:
    if (ctx->pc == 0x2E1168u) {
        ctx->pc = 0x2E1168u;
            // 0x2e1168: 0xffbf00e0  sd          $ra, 0xE0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
        ctx->pc = 0x2E116Cu;
        goto label_fallthrough_0x2e1164;
    }
    ctx->pc = 0x2E1164u;
    {
        const bool branch_taken_0x2e1164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1164u;
            // 0x2e1168: 0xffbf00e0  sd          $ra, 0xE0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1164) {
            ctx->pc = 0x2E1180u;
            goto label_2e1180;
        }
    }
label_fallthrough_0x2e1164:
    ctx->pc = 0x2E116Cu;
    // 0x2e116c: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x2e116cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e1170:
    // 0x2e1170: 0xc0b829a  jal         func_2E0A68
label_2e1174:
    if (ctx->pc == 0x2E1174u) {
        ctx->pc = 0x2E1174u;
            // 0x2e1174: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1178u;
        goto label_2e1178;
    }
    ctx->pc = 0x2E1170u;
    SET_GPR_U32(ctx, 31, 0x2E1178u);
    ctx->pc = 0x2E1174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1170u;
            // 0x2e1174: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A68u;
    if (runtime->hasFunction(0x2E0A68u)) {
        auto targetFn = runtime->lookupFunction(0x2E0A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1178u; }
        if (ctx->pc != 0x2E1178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0A68_0x2e0a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1178u; }
        if (ctx->pc != 0x2E1178u) { return; }
    }
    ctx->pc = 0x2E1178u;
label_2e1178:
    // 0x2e1178: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E1178u;
    {
        const bool branch_taken_0x2e1178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E117Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1178u;
            // 0x2e117c: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1178) {
            ctx->pc = 0x2E11D0u;
            goto label_2e11d0;
        }
    }
    ctx->pc = 0x2E1180u;
label_2e1180:
    // 0x2e1180: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x2e1180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e1184: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e1184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1188: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e1188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e118c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2e118cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e1190:
    // 0x2e1190: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2e1190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e1194: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2e1194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2e1198: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x2e1198u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2e119c: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x2e119cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2e11a0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2e11a4:
    // 0x2e11a4: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2e11a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x2e11a8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2e11a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2e11ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e11acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e11b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2e11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2e11b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e11b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e11b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e11bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e11bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e11c0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2e11c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2e11c4: 0x501fff2  bgez        $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E11C4u;
    {
        const bool branch_taken_0x2e11c4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2E11C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11C4u;
            // 0x2e11c8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11c4) {
            ctx->pc = 0x2E1190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1190;
        }
    }
    ctx->pc = 0x2E11CCu;
    // 0x2e11cc: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x2e11ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_2e11d0:
    // 0x2e11d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E11D0u;
    {
        const bool branch_taken_0x2e11d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11D0u;
            // 0x2e11d4: 0x2604003f  addiu       $a0, $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11d0) {
            ctx->pc = 0x2E11F8u;
            goto label_2e11f8;
        }
    }
    ctx->pc = 0x2E11D8u;
    // 0x2e11d8: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x2e11d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2e11dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e11dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11e0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2e11e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2e11e4:
    // 0x2e11e4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e11e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e11e8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2e11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e11ec: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2e11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e11f0: 0x5c400093  bgtzl       $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2E11F0u;
    {
        const bool branch_taken_0x2e11f0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2e11f0) {
            ctx->pc = 0x2E11F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11F0u;
            // 0x2e11f4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1440u;
            goto label_2e1440;
        }
    }
    ctx->pc = 0x2E11F8u;
label_2e11f8:
    // 0x2e11f8: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x2e11f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_2e11fc:
    // 0x2e11fc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2E11FCu;
    {
        const bool branch_taken_0x2e11fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11FCu;
            // 0x2e1200: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11fc) {
            ctx->pc = 0x2E12ECu;
            goto label_2e12ec;
        }
    }
    ctx->pc = 0x2E1204u;
    // 0x2e1204: 0x2416ff80  addiu       $s6, $zero, -0x80
    ctx->pc = 0x2e1204u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2e1208: 0x2451003f  addiu       $s1, $v0, 0x3F
    ctx->pc = 0x2e1208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2e120c: 0x0  nop
    ctx->pc = 0x2e120cu;
    // NOP
label_2e1210:
    // 0x2e1210: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2e1210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2e1214: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E1214u;
    {
        const bool branch_taken_0x2e1214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1214u;
            // 0x2e1218: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1214) {
            ctx->pc = 0x2E1288u;
            goto label_2e1288;
        }
    }
    ctx->pc = 0x2E121Cu;
    // 0x2e121c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2e121cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e1220: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1220u;
    {
        const bool branch_taken_0x2e1220 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E1224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1220u;
            // 0x2e1224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1220) {
            ctx->pc = 0x2E1244u;
            goto label_2e1244;
        }
    }
    ctx->pc = 0x2E1228u;
label_2e1228:
    // 0x2e1228: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x2e1228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_2e122c:
    // 0x2e122c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2e122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e1230: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e1230u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1234: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e1234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e1238: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2e1238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2e123c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E123Cu;
    {
        const bool branch_taken_0x2e123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E123Cu;
            // 0x2e1240: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e123c) {
            ctx->pc = 0x2E1228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1228;
        }
    }
    ctx->pc = 0x2E1244u;
label_2e1244:
    // 0x2e1244: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x2e1244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2e1248: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1248u;
    {
        const bool branch_taken_0x2e1248 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2E124Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1248u;
            // 0x2e124c: 0xa0760000  sb          $s6, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1248) {
            ctx->pc = 0x2E1288u;
            goto label_2e1288;
        }
    }
    ctx->pc = 0x2E1250u;
    // 0x2e1250: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2e1250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e1254: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E1254u;
    {
        const bool branch_taken_0x2e1254 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2E1258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1254u;
            // 0x2e1258: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1254) {
            ctx->pc = 0x2E1288u;
            goto label_2e1288;
        }
    }
    ctx->pc = 0x2E125Cu;
    // 0x2e125c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e125cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1260:
    // 0x2e1260: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2e1260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e1264: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e1264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e1268: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2e1268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e126c: 0x0  nop
    ctx->pc = 0x2e126cu;
    // NOP
    // 0x2e1270: 0x0  nop
    ctx->pc = 0x2e1270u;
    // NOP
    // 0x2e1274: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E1274u;
    {
        const bool branch_taken_0x2e1274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1274u;
            // 0x2e1278: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1274) {
            ctx->pc = 0x2E1260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1260;
        }
    }
    ctx->pc = 0x2E127Cu;
    // 0x2e127c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E127Cu;
    {
        const bool branch_taken_0x2e127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E127Cu;
            // 0x2e1280: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e127c) {
            ctx->pc = 0x2E128Cu;
            goto label_2e128c;
        }
    }
    ctx->pc = 0x2E1284u;
    // 0x2e1284: 0x0  nop
    ctx->pc = 0x2e1284u;
    // NOP
label_2e1288:
    // 0x2e1288: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e1288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e128c:
    // 0x2e128c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2e128cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e1290:
    // 0x2e1290: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2e1290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e1294: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2e1294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2e1298: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x2e1298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2e129c:
    // 0x2e129c: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x2e129cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2e12a0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e12a4: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2e12a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x2e12a8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2e12a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2e12ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e12acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e12b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2e12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2e12b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e12b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e12b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e12b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e12bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e12bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e12c0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2e12c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2e12c4: 0x501fff2  bgez        $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E12C4u;
    {
        const bool branch_taken_0x2e12c4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2E12C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12C4u;
            // 0x2e12c8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12c4) {
            ctx->pc = 0x2E1290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1290;
        }
    }
    ctx->pc = 0x2E12CCu;
    // 0x2e12cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e12ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e12d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12d4: 0xc0b82aa  jal         func_2E0AA8
    ctx->pc = 0x2E12D4u;
    SET_GPR_U32(ctx, 31, 0x2E12DCu);
    ctx->pc = 0x2E12D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12D4u;
            // 0x2e12d8: 0x2610ffc0  addiu       $s0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0AA8u;
    if (runtime->hasFunction(0x2E0AA8u)) {
        auto targetFn = runtime->lookupFunction(0x2E0AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E12DCu; }
        if (ctx->pc != 0x2E12DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0AA8_0x2e0aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E12DCu; }
        if (ctx->pc != 0x2E12DCu) { return; }
    }
    ctx->pc = 0x2E12DCu;
label_2e12dc:
    // 0x2e12dc: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x2e12dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2e12e0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2e12e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2e12e4: 0x1040ffca  beqz        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2E12E4u;
    {
        const bool branch_taken_0x2e12e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12E4u;
            // 0x2e12e8: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12e4) {
            ctx->pc = 0x2E1210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1210;
        }
    }
    ctx->pc = 0x2E12ECu;
label_2e12ec:
    // 0x2e12ec: 0x1a000032  blez        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E12ECu;
    {
        const bool branch_taken_0x2e12ec = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12ECu;
            // 0x2e12f0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12ec) {
            ctx->pc = 0x2E13B8u;
            goto label_2e13b8;
        }
    }
    ctx->pc = 0x2E12F4u;
    // 0x2e12f4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2e12f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e12f8: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E12F8u;
    {
        const bool branch_taken_0x2e12f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E12FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12F8u;
            // 0x2e12fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12f8) {
            ctx->pc = 0x2E131Cu;
            goto label_2e131c;
        }
    }
    ctx->pc = 0x2E1300u;
label_2e1300:
    // 0x2e1300: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x2e1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2e1304: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2e1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e1308: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e1308u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e130c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e1310: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2e1310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2e1314:
    // 0x2e1314: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E1314u;
    {
        const bool branch_taken_0x2e1314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1314u;
            // 0x2e1318: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1314) {
            ctx->pc = 0x2E1300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1300;
        }
    }
    ctx->pc = 0x2E131Cu;
label_2e131c:
    // 0x2e131c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2e131cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2e1320: 0xf02021  addu        $a0, $a3, $s0
    ctx->pc = 0x2e1320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2e1324: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x2e1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2e1328: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2e1328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e132c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E132Cu;
    {
        const bool branch_taken_0x2e132c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E1330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E132Cu;
            // 0x2e1330: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e132c) {
            ctx->pc = 0x2E1364u;
            goto label_2e1364;
        }
    }
    ctx->pc = 0x2E1334u;
    // 0x2e1334: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2e1334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e1338: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1338u;
    {
        const bool branch_taken_0x2e1338 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1338u;
            // 0x2e133c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1338) {
            ctx->pc = 0x2E1364u;
            goto label_2e1364;
        }
    }
    ctx->pc = 0x2E1340u;
    // 0x2e1340: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e1340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1344: 0x0  nop
    ctx->pc = 0x2e1344u;
    // NOP
label_2e1348:
    // 0x2e1348: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2e1348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2e134c:
    // 0x2e134c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e134cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e1350: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2e1350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e1354: 0x0  nop
    ctx->pc = 0x2e1354u;
    // NOP
    // 0x2e1358: 0x0  nop
    ctx->pc = 0x2e1358u;
    // NOP
    // 0x2e135c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E135Cu;
    {
        const bool branch_taken_0x2e135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E135Cu;
            // 0x2e1360: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e135c) {
            ctx->pc = 0x2E1348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1348;
        }
    }
    ctx->pc = 0x2E1364u;
label_2e1364:
    // 0x2e1364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e1364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1368: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2e1368u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e136c: 0x0  nop
    ctx->pc = 0x2e136cu;
    // NOP
label_2e1370:
    // 0x2e1370: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2e1370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e1374: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e1374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e1378: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x2e1378u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2e137c: 0x2906000e  slti        $a2, $t0, 0xE
    ctx->pc = 0x2e137cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)14) ? 1 : 0);
label_2e1380:
    // 0x2e1380: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x2e1380u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2e1384: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e1384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e1388: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2e1388u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_2e138c:
    // 0x2e138c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2e138cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2e1390: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e1390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e1394: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2e1394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2e1398: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e1398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e139c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e139cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e13a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e13a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e13a4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2e13a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2e13a8: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E13A8u;
    {
        const bool branch_taken_0x2e13a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E13ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13A8u;
            // 0x2e13ac: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13a8) {
            ctx->pc = 0x2E1370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1370;
        }
    }
    ctx->pc = 0x2E13B0u;
    // 0x2e13b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E13B0u;
    {
        const bool branch_taken_0x2e13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13B0u;
            // 0x2e13b4: 0x32820004  andi        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13b0) {
            ctx->pc = 0x2E13E8u;
            goto label_2e13e8;
        }
    }
    ctx->pc = 0x2E13B8u;
label_2e13b8:
    // 0x2e13b8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x2e13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2e13bc: 0x10100b  movn        $v0, $zero, $s0
    ctx->pc = 0x2e13bcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2e13c0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x2e13c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2e13c4:
    // 0x2e13c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2e13c8:
    // 0x2e13c8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2e13c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2e13cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2e13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2e13d0: 0x0  nop
    ctx->pc = 0x2e13d0u;
    // NOP
    // 0x2e13d4: 0x0  nop
    ctx->pc = 0x2e13d4u;
    // NOP
    // 0x2e13d8: 0x0  nop
    ctx->pc = 0x2e13d8u;
    // NOP
    // 0x2e13dc: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E13DCu;
    {
        const bool branch_taken_0x2e13dc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2E13E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13DCu;
            // 0x2e13e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13dc) {
            ctx->pc = 0x2E13C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e13c8;
        }
    }
    ctx->pc = 0x2E13E4u;
    // 0x2e13e4: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x2e13e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_2e13e8:
    // 0x2e13e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E13E8u;
    {
        const bool branch_taken_0x2e13e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13E8u;
            // 0x2e13ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13e8) {
            ctx->pc = 0x2E1400u;
            goto label_2e1400;
        }
    }
    ctx->pc = 0x2E13F0u;
    // 0x2e13f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e13f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13f4: 0xafb7003c  sw          $s7, 0x3C($sp)
    ctx->pc = 0x2e13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 23));
label_2e13f8:
    // 0x2e13f8: 0xc0b82aa  jal         func_2E0AA8
    ctx->pc = 0x2E13F8u;
    SET_GPR_U32(ctx, 31, 0x2E1400u);
    ctx->pc = 0x2E13FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13F8u;
            // 0x2e13fc: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0AA8u;
    if (runtime->hasFunction(0x2E0AA8u)) {
        auto targetFn = runtime->lookupFunction(0x2E0AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1400u; }
        if (ctx->pc != 0x2E1400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0AA8_0x2e0aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1400u; }
        if (ctx->pc != 0x2E1400u) { return; }
    }
    ctx->pc = 0x2E1400u;
label_2e1400:
    // 0x2e1400: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e1400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e1404:
    // 0x2e1404: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2e1404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e1408:
    // 0x2e1408: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e140c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2e140cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2e1410: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x2e1410u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e1414: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x2e1414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2e1418: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2e1418u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2e141c: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2e141cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1420: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x2e1420u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1424: 0xa2640002  sb          $a0, 0x2($s3)
    ctx->pc = 0x2e1424u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1428: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e1428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e142c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e142cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e1430: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x2e1430u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1434: 0x501fff4  bgez        $t0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E1434u;
    {
        const bool branch_taken_0x2e1434 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2E1438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1434u;
            // 0x2e1438: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1434) {
            ctx->pc = 0x2E1408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1408;
        }
    }
    ctx->pc = 0x2E143Cu;
label_2e143c:
    // 0x2e143c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2e143cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e1440:
    // 0x2e1440: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x2e1440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e1444: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2e1444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e1448: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x2e1448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2e144c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2e144cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1450: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x2e1450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e1454: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2e1454u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e1458: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x2e1458u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e145c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2e145cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e1460: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1460u;
            // 0x2e1464: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1468u;
    ctx->pc = 0x2e1468u;
}
