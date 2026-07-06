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

// Function: sub_00205EA0
// Address: 0x205ea0 - 0x206190
void sub_00205EA0_0x205ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205EA0_0x205ea0");
#endif

    switch (ctx->pc) {
        case 0x205f70u: goto label_205f70;
        case 0x205f98u: goto label_205f98;
        case 0x2060dcu: goto label_2060dc;
        case 0x206160u: goto label_206160;
        default: break;
    }

    ctx->pc = 0x205ea0u;

    // 0x205ea0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x205ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x205ea4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x205ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x205ea8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x205ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x205eac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x205eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x205eb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x205eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x205eb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x205eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x205eb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x205eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x205ebc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x205ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x205ec0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x205ec0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ec4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x205ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x205ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x205ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x205ed4: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x205ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205ed8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x205ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x205edc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205EDCu;
    {
        const bool branch_taken_0x205edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EDCu;
        // 0x205ee0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205edc) {
            ctx->pc = 0x205EE8u;
            goto label_205ee8;
        }
    }
    ctx->pc = 0x205EE4u;
    // 0x205ee4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x205ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205ee8:
    // 0x205ee8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x205ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x205eec: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x205EECu;
    {
        const bool branch_taken_0x205eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205eec) {
            ctx->pc = 0x206158u;
            goto label_206158;
        }
    }
    ctx->pc = 0x205EF4u;
    // 0x205ef4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x205ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x205ef8: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x205EF8u;
    {
        const bool branch_taken_0x205ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205ef8) {
            ctx->pc = 0x206158u;
            goto label_206158;
        }
    }
    ctx->pc = 0x205F00u;
    // 0x205f00: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x205f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x205f04: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x205f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205f08: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x205f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x205f0c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205f10: 0x8c669bf8  lw          $a2, -0x6408($v1)
    ctx->pc = 0x205f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205f14: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x205f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x205f18: 0x90c304fa  lbu         $v1, 0x4FA($a2)
    ctx->pc = 0x205f18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1274)));
    // 0x205f1c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x205F1Cu;
    {
        const bool branch_taken_0x205f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x205F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F1Cu;
        // 0x205f20: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f1c) {
            ctx->pc = 0x205F48u;
            goto label_205f48;
        }
    }
    ctx->pc = 0x205F24u;
    // 0x205f24: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x205f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x205f28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x205f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x205f2c: 0x248498a0  addiu       $a0, $a0, -0x6760
    ctx->pc = 0x205f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940832));
    // 0x205f30: 0x90c304f9  lbu         $v1, 0x4F9($a2)
    ctx->pc = 0x205f30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1273)));
    // 0x205f34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x205f38: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x205f38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205f3c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205F3Cu;
    {
        const bool branch_taken_0x205f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x205f3c) {
            ctx->pc = 0x205F48u;
            goto label_205f48;
        }
    }
    ctx->pc = 0x205F44u;
    // 0x205f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x205f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205f48:
    // 0x205f48: 0x54e00006  bnel        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x205F48u;
    {
        const bool branch_taken_0x205f48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f48) {
            ctx->pc = 0x205F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F48u;
            // 0x205f4c: 0x905304fb  lbu         $s3, 0x4FB($v0) (Delay Slot)
            SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1275)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F64u;
            goto label_205f64;
        }
    }
    ctx->pc = 0x205F50u;
    // 0x205f50: 0x904304ff  lbu         $v1, 0x4FF($v0)
    ctx->pc = 0x205f50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1279)));
    // 0x205f54: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205F54u;
    {
        const bool branch_taken_0x205f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f54) {
            ctx->pc = 0x205F60u;
            goto label_205f60;
        }
    }
    ctx->pc = 0x205F5Cu;
    // 0x205f5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x205f5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205f60:
    // 0x205f60: 0x905304fb  lbu         $s3, 0x4FB($v0)
    ctx->pc = 0x205f60u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1275)));
label_205f64:
    // 0x205f64: 0x8182b  sltu        $v1, $zero, $t0
    ctx->pc = 0x205f64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x205f68: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x205F68u;
    {
        const bool branch_taken_0x205f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F68u;
        // 0x205f6c: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f68) {
            ctx->pc = 0x206130u;
            goto label_206130;
        }
    }
    ctx->pc = 0x205F70u;
label_205f70:
    // 0x205f70: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x205f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x205f74: 0x13b040  sll         $s6, $s3, 1
    ctx->pc = 0x205f74u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x205f78: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x205f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x205f7c: 0x76b821  addu        $s7, $v1, $s6
    ctx->pc = 0x205f7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x205f80: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x205f80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x205f84: 0x128a00  sll         $s1, $s2, 8
    ctx->pc = 0x205f84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x205f88: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x205f88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x205f8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x205f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x205f90: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x205F90u;
    {
        const bool branch_taken_0x205f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F90u;
        // 0x205f94: 0x62f021  addu        $fp, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f90) {
            ctx->pc = 0x2060F0u;
            goto label_2060f0;
        }
    }
    ctx->pc = 0x205F98u;
label_205f98:
    // 0x205f98: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x205f98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x205f9c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x205F9Cu;
    {
        const bool branch_taken_0x205f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f9c) {
            ctx->pc = 0x205FE0u;
            goto label_205fe0;
        }
    }
    ctx->pc = 0x205FA4u;
    // 0x205fa4: 0x904304fb  lbu         $v1, 0x4FB($v0)
    ctx->pc = 0x205fa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1275)));
    // 0x205fa8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x205fa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x205fac: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x205FACu;
    {
        const bool branch_taken_0x205fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205fac) {
            ctx->pc = 0x205FE0u;
            goto label_205fe0;
        }
    }
    ctx->pc = 0x205FB4u;
    // 0x205fb4: 0x904304fd  lbu         $v1, 0x4FD($v0)
    ctx->pc = 0x205fb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1277)));
    // 0x205fb8: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x205fb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x205fbc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x205FBCu;
    {
        const bool branch_taken_0x205fbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x205fbc) {
            ctx->pc = 0x205FE0u;
            goto label_205fe0;
        }
    }
    ctx->pc = 0x205FC4u;
    // 0x205fc4: 0x904304fc  lbu         $v1, 0x4FC($v0)
    ctx->pc = 0x205fc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1276)));
    // 0x205fc8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x205fc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x205fcc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x205FCCu;
    {
        const bool branch_taken_0x205fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205fcc) {
            ctx->pc = 0x205FE0u;
            goto label_205fe0;
        }
    }
    ctx->pc = 0x205FD4u;
    // 0x205fd4: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x205fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x205fd8: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x205FD8u;
    {
        const bool branch_taken_0x205fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fd8) {
            ctx->pc = 0x2060E0u;
            goto label_2060e0;
        }
    }
    ctx->pc = 0x205FE0u;
label_205fe0:
    // 0x205fe0: 0x904204ff  lbu         $v0, 0x4FF($v0)
    ctx->pc = 0x205fe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1279)));
    // 0x205fe4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x205FE4u;
    {
        const bool branch_taken_0x205fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fe4) {
            ctx->pc = 0x206040u;
            goto label_206040;
        }
    }
    ctx->pc = 0x205FECu;
    // 0x205fec: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205ff0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x205ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x205ff4: 0x8c689bf8  lw          $t0, -0x6408($v1)
    ctx->pc = 0x205ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205ff8: 0x8c429bf0  lw          $v0, -0x6410($v0)
    ctx->pc = 0x205ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941680)));
    // 0x205ffc: 0x910704f9  lbu         $a3, 0x4F9($t0)
    ctx->pc = 0x205ffcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1273)));
    // 0x206000: 0x910504fa  lbu         $a1, 0x4FA($t0)
    ctx->pc = 0x206000u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1274)));
    // 0x206004: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x206004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x206008: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x206008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20600c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x20600cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x206010: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x206010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x206014: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x206014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x206018: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x206018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20601c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x20601cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x206020: 0x90840524  lbu         $a0, 0x524($a0)
    ctx->pc = 0x206020u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1316)));
    // 0x206024: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x206024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x206028: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x206028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20602c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x20602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x206030: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x206030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x206034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206038: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x206038u;
    {
        const bool branch_taken_0x206038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206038u;
        // 0x20603c: 0x94420002  lhu         $v0, 0x2($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206038) {
            ctx->pc = 0x206080u;
            goto label_206080;
        }
    }
    ctx->pc = 0x206040u;
label_206040:
    // 0x206040: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x206040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x206044: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x206044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x206048: 0x906204f9  lbu         $v0, 0x4F9($v1)
    ctx->pc = 0x206048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1273)));
    // 0x20604c: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x20604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x206050: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x206050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x206054: 0x906304fa  lbu         $v1, 0x4FA($v1)
    ctx->pc = 0x206054u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1274)));
    // 0x206058: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x206058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20605c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x20605cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x206060: 0x90840524  lbu         $a0, 0x524($a0)
    ctx->pc = 0x206060u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1316)));
    // 0x206064: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x206064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x206068: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x206068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20606c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20606cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x206070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206074: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x206074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x206078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20607c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x20607cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_206080:
    // 0x206080: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x206080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x206084: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x206084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x206088: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x206088u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x20608c: 0x24e798a0  addiu       $a3, $a3, -0x6760
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940832));
    // 0x206090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206094: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206098: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x206098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20609c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x20609cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2060a0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2060a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2060a4: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x2060a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2060a8: 0x90c90000  lbu         $t1, 0x0($a2)
    ctx->pc = 0x2060a8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2060ac: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x2060acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2060b0: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2060b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2060b4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2060b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2060b8: 0x91a80  sll         $v1, $t1, 10
    ctx->pc = 0x2060b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x2060bc: 0x90e70524  lbu         $a3, 0x524($a3)
    ctx->pc = 0x2060bcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1316)));
    // 0x2060c0: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2060c4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2060c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2060c8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2060c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2060cc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2060ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2060d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2060d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2060d4: 0xc0814e4  jal         func_205390
    ctx->pc = 0x2060D4u;
    SET_GPR_U32(ctx, 31, 0x2060DCu);
    ctx->pc = 0x2060D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060D4u;
    // 0x2060d8: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205390u, 0x2060D4u, 0x2060DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060DCu;
label_2060dc:
    // 0x2060dc: 0x0  nop
    ctx->pc = 0x2060dcu;
    // NOP
label_2060e0:
    // 0x2060e0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x2060e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2060e4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2060e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2060e8: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x2060e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2060ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2060ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2060f0:
    // 0x2060f0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2060f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2060f4: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2060f8: 0x904404fe  lbu         $a0, 0x4FE($v0)
    ctx->pc = 0x2060f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1278)));
    // 0x2060fc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2060fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x206100: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x206100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x206104: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x206104u;
    {
        const bool branch_taken_0x206104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206104) {
            ctx->pc = 0x206120u;
            goto label_206120;
        }
    }
    ctx->pc = 0x20610Cu;
    // 0x20610c: 0x90430502  lbu         $v1, 0x502($v0)
    ctx->pc = 0x20610cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1282)));
    // 0x206110: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x206110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x206114: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x206114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x206118: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x206118u;
    {
        const bool branch_taken_0x206118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206118) {
            ctx->pc = 0x205F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205f98;
        }
    }
    ctx->pc = 0x206120u;
label_206120:
    // 0x206120: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x206120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x206124: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x206124u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206128: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x206128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x20612c: 0x0  nop
    ctx->pc = 0x20612cu;
    // NOP
label_206130:
    // 0x206130: 0x904304fd  lbu         $v1, 0x4FD($v0)
    ctx->pc = 0x206130u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1277)));
    // 0x206134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206138: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x206138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20613c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x20613Cu;
    {
        const bool branch_taken_0x20613c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20613c) {
            ctx->pc = 0x206158u;
            goto label_206158;
        }
    }
    ctx->pc = 0x206144u;
    // 0x206144: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x206144u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x206148: 0x2a03000f  slti        $v1, $s0, 0xF
    ctx->pc = 0x206148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x20614c: 0x5460ff88  bnel        $v1, $zero, . + 4 + (-0x78 << 2)
    ctx->pc = 0x20614Cu;
    {
        const bool branch_taken_0x20614c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20614c) {
            ctx->pc = 0x206150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20614Cu;
            // 0x206150: 0x905204fc  lbu         $s2, 0x4FC($v0) (Delay Slot)
            SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205f70;
        }
    }
    ctx->pc = 0x206154u;
    // 0x206154: 0x0  nop
    ctx->pc = 0x206154u;
    // NOP
label_206158:
    // 0x206158: 0xc081484  jal         func_205210
    ctx->pc = 0x206158u;
    SET_GPR_U32(ctx, 31, 0x206160u);
    ctx->pc = 0x205210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205210u, 0x206158u, 0x206160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206160u;
label_206160:
    // 0x206160: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x206160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x206164: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x206164u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x206168: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x206168u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20616c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20616cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206170: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x206170u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206174: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x206174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x206178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20617c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20617cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206188: 0x3e00008  jr          $ra
    ctx->pc = 0x206188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206188u;
        // 0x20618c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206190u;
}
