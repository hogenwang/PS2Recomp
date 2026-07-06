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

// Function: sub_001D8EB0
// Address: 0x1d8eb0 - 0x1d9358
void sub_001D8EB0_0x1d8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8EB0_0x1d8eb0");
#endif

    switch (ctx->pc) {
        case 0x1d9188u: goto label_1d9188;
        default: break;
    }

    ctx->pc = 0x1d8eb0u;

    // 0x1d8eb0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1d8eb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8eb4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1d8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d8eb8: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x1d8eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1d8ebc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1d8ebcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ec0: 0x1881023  subu        $v0, $t4, $t0
    ctx->pc = 0x1d8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1d8ec4: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x1d8ec4u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8ec8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8ecc: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x1d8eccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d8ed0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d8ed0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8ed4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8ed8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1d8ed8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8edc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8ee0: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1d8ee0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8ee4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8ee8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d8ee8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8eec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8ef0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d8ef0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8ef4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8ef8: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d8efc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8efcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8f00: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x1d8f00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1d8f04: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d8f04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8f08: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d8f08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d8f0c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d8f10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8f14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8f18: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x1d8f18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1d8f1c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d8f1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8f20: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d8f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d8f24: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d8f24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d8f28: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8f28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8f2c: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1d8f2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1d8f30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8f34: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d8f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d8f38: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8F38u;
    {
        const bool branch_taken_0x1d8f38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F38u;
        // 0x1d8f3c: 0x12a5004  sllv        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f38) {
            ctx->pc = 0x1D8F58u;
            goto label_1d8f58;
        }
    }
    ctx->pc = 0x1D8F40u;
    // 0x1d8f40: 0x91023  negu        $v0, $t1
    ctx->pc = 0x1d8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1d8f44: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d8f48: 0x1422825  or          $a1, $t2, $v0
    ctx->pc = 0x1d8f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d8f4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8F4Cu;
    {
        const bool branch_taken_0x1d8f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F4Cu;
        // 0x1d8f50: 0x1275004  sllv        $t2, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f4c) {
            ctx->pc = 0x1D8F60u;
            goto label_1d8f60;
        }
    }
    ctx->pc = 0x1D8F54u;
    // 0x1d8f54: 0x0  nop
    ctx->pc = 0x1d8f54u;
    // NOP
label_1d8f58:
    // 0x1d8f58: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1d8f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f5c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1d8f5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f60:
    // 0x1d8f60: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d8f60u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8f64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8f68: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d8f68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8f6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8f70: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8f70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8f74: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d8f74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8f78: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d8f78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d8f7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8f80: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8f84: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d8f84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8f88: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d8f88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d8f8c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1d8f90: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8f90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8f94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8f98: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d8f98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d8f9c: 0x14a400eb  bne         $a1, $a0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1D8F9Cu;
    {
        const bool branch_taken_0x1d8f9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F9Cu;
        // 0x1d8fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f9c) {
            ctx->pc = 0x1D934Cu;
            goto label_1d934c;
        }
    }
    ctx->pc = 0x1D8FA4u;
    // 0x1d8fa4: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1d8fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d8fa8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8FA8u;
    {
        const bool branch_taken_0x1d8fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fa8) {
            ctx->pc = 0x1D8FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FA8u;
            // 0x1d8fac: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9000u;
            goto label_1d9000;
        }
    }
    ctx->pc = 0x1D8FB0u;
    // 0x1d8fb0: 0x2529ffe5  addiu       $t1, $t1, -0x1B
    ctx->pc = 0x1d8fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x1d8fb4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1d8fb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8fb8: 0x1271804  sllv        $v1, $a3, $t1
    ctx->pc = 0x1d8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1d8fbc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d8fbcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8fc0: 0x39220000  xori        $v0, $t1, 0x0
    ctx->pc = 0x1d8fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)0);
    // 0x1d8fc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8fc8: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x1d8fc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x1d8fcc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d8fccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8fd0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8fd4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8fd8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d8fd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8fdc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8fe0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d8fe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d8fe4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d8fe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d8fe8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8fec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d8ff0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d8ff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d8ff4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d8ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d8ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8FF8u;
    {
        const bool branch_taken_0x1d8ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FF8u;
        // 0x1d8ffc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ff8) {
            ctx->pc = 0x1D9004u;
            goto label_1d9004;
        }
    }
    ctx->pc = 0x1D9000u;
label_1d9000:
    // 0x1d9000: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1d9000u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1d9004:
    // 0x1d9004: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1d9004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d9008: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D9008u;
    {
        const bool branch_taken_0x1d9008 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9008u;
        // 0x1d900c: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9008) {
            ctx->pc = 0x1D9058u;
            goto label_1d9058;
        }
    }
    ctx->pc = 0x1D9010u;
    // 0x1d9010: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1d9010u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9014: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d9014u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9018: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d901c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d901cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9020: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9024: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9028: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9028u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d902c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d902cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9030: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9030u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d9034: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9038: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d903c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d903cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9040: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d9040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d9044: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9048: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9048u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d904c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D904Cu;
    {
        const bool branch_taken_0x1d904c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D904Cu;
        // 0x1d9050: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d904c) {
            ctx->pc = 0x1D9060u;
            goto label_1d9060;
        }
    }
    ctx->pc = 0x1D9054u;
    // 0x1d9054: 0x0  nop
    ctx->pc = 0x1d9054u;
    // NOP
label_1d9058:
    // 0x1d9058: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d9058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d905c: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1d905cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1d9060:
    // 0x1d9060: 0x14a000ba  bnez        $a1, . + 4 + (0xBA << 2)
    ctx->pc = 0x1D9060u;
    {
        const bool branch_taken_0x1d9060 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9060u;
        // 0x1d9064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9060) {
            ctx->pc = 0x1D934Cu;
            goto label_1d934c;
        }
    }
    ctx->pc = 0x1D9068u;
    // 0x1d9068: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1d9068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d906c: 0x15220012  bne         $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D906Cu;
    {
        const bool branch_taken_0x1d906c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D906Cu;
        // 0x1d9070: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d906c) {
            ctx->pc = 0x1D90B8u;
            goto label_1d90b8;
        }
    }
    ctx->pc = 0x1D9074u;
    // 0x1d9074: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1d9074u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9078: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d9078u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d907c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d907cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9080: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9084: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9084u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9088: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d908c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d908cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9090: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d9090u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9094: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d9098: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d909c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d90a0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d90a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d90a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d90a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d90a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d90a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d90ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d90acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d90b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D90B0u;
    {
        const bool branch_taken_0x1d90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90B0u;
        // 0x1d90b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90b0) {
            ctx->pc = 0x1D90C0u;
            goto label_1d90c0;
        }
    }
    ctx->pc = 0x1D90B8u;
label_1d90b8:
    // 0x1d90b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d90b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d90bc: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1d90bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1d90c0:
    // 0x1d90c0: 0x10a000a2  beqz        $a1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D90C0u;
    {
        const bool branch_taken_0x1d90c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90C0u;
        // 0x1d90c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90c0) {
            ctx->pc = 0x1D934Cu;
            goto label_1d934c;
        }
    }
    ctx->pc = 0x1D90C8u;
    // 0x1d90c8: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1d90c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d90cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D90CCu;
    {
        const bool branch_taken_0x1d90cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90CCu;
        // 0x1d90d0: 0xa2e82  srl         $a1, $t2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90cc) {
            ctx->pc = 0x1D90E4u;
            goto label_1d90e4;
        }
    }
    ctx->pc = 0x1D90D4u;
    // 0x1d90d4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1d90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1d90d8: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1d90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1d90dc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d90e0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d90e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1d90e4:
    // 0x1d90e4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d90e8: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D90E8u;
    {
        const bool branch_taken_0x1d90e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90E8u;
        // 0x1d90ec: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90e8) {
            ctx->pc = 0x1D9128u;
            goto label_1d9128;
        }
    }
    ctx->pc = 0x1D90F0u;
    // 0x1d90f0: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1D90F0u;
    {
        const bool branch_taken_0x1d90f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d90f0) {
            ctx->pc = 0x1D9328u;
            goto label_1d9328;
        }
    }
    ctx->pc = 0x1D90F8u;
    // 0x1d90f8: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x1d90f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d90fc: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1D90FCu;
    {
        const bool branch_taken_0x1d90fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d90fc) {
            ctx->pc = 0x1D9328u;
            goto label_1d9328;
        }
    }
    ctx->pc = 0x1D9104u;
    // 0x1d9104: 0x2ca20016  sltiu       $v0, $a1, 0x16
    ctx->pc = 0x1d9104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d9108: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1D9108u;
    {
        const bool branch_taken_0x1d9108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9108u;
        // 0x1d910c: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9108) {
            ctx->pc = 0x1D9328u;
            goto label_1d9328;
        }
    }
    ctx->pc = 0x1D9110u;
    // 0x1d9110: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1d9110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9114: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9114u;
    {
        const bool branch_taken_0x1d9114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9114) {
            ctx->pc = 0x1D9118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9114u;
            // 0x1d9118: 0x2529ffe0  addiu       $t1, $t1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D913Cu;
            goto label_1d913c;
        }
    }
    ctx->pc = 0x1D911Cu;
    // 0x1d911c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D911Cu;
    {
        const bool branch_taken_0x1d911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D911Cu;
        // 0x1d9120: 0xa5140  sll         $t2, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d911c) {
            ctx->pc = 0x1D9178u;
            goto label_1d9178;
        }
    }
    ctx->pc = 0x1D9124u;
    // 0x1d9124: 0x0  nop
    ctx->pc = 0x1d9124u;
    // NOP
label_1d9128:
    // 0x1d9128: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x1d9128u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x1d912c: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1d912cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9130: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D9130u;
    {
        const bool branch_taken_0x1d9130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9130) {
            ctx->pc = 0x1D9134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9130u;
            // 0x1d9134: 0xa5180  sll         $t2, $t2, 6 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9178u;
            goto label_1d9178;
        }
    }
    ctx->pc = 0x1D9138u;
    // 0x1d9138: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1d9138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
label_1d913c:
    // 0x1d913c: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1d913cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1d9140: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d9140u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9144: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9148: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d914c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d914cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9150: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9154: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d9154u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9158: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d915c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9160: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9160u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9164: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9168: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d9168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d916c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d916cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9170: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9174: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d9178:
    // 0x1d9178: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d9178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d917c: 0x240b0035  addiu       $t3, $zero, 0x35
    ctx->pc = 0x1d917cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1d9180: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d9180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d9184: 0x29220016  slti        $v0, $t1, 0x16
    ctx->pc = 0x1d9184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
label_1d9188:
    // 0x1d9188: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9188u;
    {
        const bool branch_taken_0x1d9188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9188u;
        // 0x1d918c: 0xa2d42  srl         $a1, $t2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9188) {
            ctx->pc = 0x1D919Cu;
            goto label_1d919c;
        }
    }
    ctx->pc = 0x1D9190u;
    // 0x1d9190: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x1d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1d9194: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d9194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d9198: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d9198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1d919c:
    // 0x1d919c: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D919Cu;
    {
        const bool branch_taken_0x1d919c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D919Cu;
        // 0x1d91a0: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d919c) {
            ctx->pc = 0x1D9208u;
            goto label_1d9208;
        }
    }
    ctx->pc = 0x1D91A4u;
    // 0x1d91a4: 0x2529000b  addiu       $t1, $t1, 0xB
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11));
    // 0x1d91a8: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1d91a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d91ac: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D91ACu;
    {
        const bool branch_taken_0x1d91ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d91ac) {
            ctx->pc = 0x1D91B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D91ACu;
            // 0x1d91b0: 0xa52c0  sll         $t2, $t2, 11 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D91F4u;
            goto label_1d91f4;
        }
    }
    ctx->pc = 0x1D91B4u;
    // 0x1d91b4: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1d91b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1d91b8: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1d91b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1d91bc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d91bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d91c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d91c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d91c4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d91c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d91c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d91c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d91cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d91ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d91d0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d91d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d91d4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d91d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d91d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d91d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d91dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d91dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d91e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d91e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d91e4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d91e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d91e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d91e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d91ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d91ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d91f0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d91f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d91f4:
    // 0x1d91f4: 0x24c6ffdf  addiu       $a2, $a2, -0x21
    ctx->pc = 0x1d91f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x1d91f8: 0x28c20022  slti        $v0, $a2, 0x22
    ctx->pc = 0x1d91f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1d91fc: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D91FCu;
    {
        const bool branch_taken_0x1d91fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91FCu;
        // 0x1d9200: 0x29220016  slti        $v0, $t1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91fc) {
            ctx->pc = 0x1D9188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9188;
        }
    }
    ctx->pc = 0x1D9204u;
    // 0x1d9204: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1d9204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1d9208:
    // 0x1d9208: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x1d9208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1d920c: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1D920Cu;
    {
        const bool branch_taken_0x1d920c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D920Cu;
        // 0x1d9210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d920c) {
            ctx->pc = 0x1D934Cu;
            goto label_1d934c;
        }
    }
    ctx->pc = 0x1D9214u;
    // 0x1d9214: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1d9214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1d9218: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d9218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d921c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1d921cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x1d9220: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d9220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d9224: 0x84c6c218  lh          $a2, -0x3DE8($a2)
    ctx->pc = 0x1d9224u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294951448)));
    // 0x1d9228: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1d9228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1d922c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d922cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d9230: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x1d9230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d9234: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9234u;
    {
        const bool branch_taken_0x1d9234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9234u;
        // 0x1d9238: 0x6a2806  srlv        $a1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9234) {
            ctx->pc = 0x1D92A0u;
            goto label_1d92a0;
        }
    }
    ctx->pc = 0x1D923Cu;
    // 0x1d923c: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x1d923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1d9240: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x1d9240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1d9244: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9244u;
    {
        const bool branch_taken_0x1d9244 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9244) {
            ctx->pc = 0x1D9248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9244u;
            // 0x1d9248: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9260u;
            goto label_1d9260;
        }
    }
    ctx->pc = 0x1D924Cu;
    // 0x1d924c: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x1d924cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1d9250: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d9250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d9254: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d9254u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d9258: 0x6a2806  srlv        $a1, $t2, $v1
    ctx->pc = 0x1d9258u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d925c: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1d925cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_1d9260:
    // 0x1d9260: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d9260u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9264: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9268: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d926c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d926cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9270: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9270u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9274: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d9274u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9278: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d927c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d927cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9280: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9280u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9284: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9288: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d9288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d928c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d928cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9290: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9290u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9294u;
    {
        const bool branch_taken_0x1d9294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9294u;
        // 0x1d9298: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9294) {
            ctx->pc = 0x1D92A8u;
            goto label_1d92a8;
        }
    }
    ctx->pc = 0x1D929Cu;
    // 0x1d929c: 0x0  nop
    ctx->pc = 0x1d929cu;
    // NOP
label_1d92a0:
    // 0x1d92a0: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x1d92a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d92a4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1d92a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1d92a8:
    // 0x1d92a8: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x1d92a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1d92ac: 0x14a30027  bne         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D92ACu;
    {
        const bool branch_taken_0x1d92ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92ACu;
        // 0x1d92b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92ac) {
            ctx->pc = 0x1D934Cu;
            goto label_1d934c;
        }
    }
    ctx->pc = 0x1D92B4u;
    // 0x1d92b4: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1d92b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d92b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D92B8u;
    {
        const bool branch_taken_0x1d92b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92B8u;
        // 0x1d92bc: 0xa2e82  srl         $a1, $t2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92b8) {
            ctx->pc = 0x1D92D0u;
            goto label_1d92d0;
        }
    }
    ctx->pc = 0x1D92C0u;
    // 0x1d92c0: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1d92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1d92c4: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1d92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1d92c8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d92cc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d92ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1d92d0:
    // 0x1d92d0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d92d4: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D92D4u;
    {
        const bool branch_taken_0x1d92d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92D4u;
        // 0x1d92d8: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92d4) {
            ctx->pc = 0x1D9308u;
            goto label_1d9308;
        }
    }
    ctx->pc = 0x1D92DCu;
    // 0x1d92dc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D92DCu;
    {
        const bool branch_taken_0x1d92dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d92dc) {
            ctx->pc = 0x1D9328u;
            goto label_1d9328;
        }
    }
    ctx->pc = 0x1D92E4u;
    // 0x1d92e4: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x1d92e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d92e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D92E8u;
    {
        const bool branch_taken_0x1d92e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d92e8) {
            ctx->pc = 0x1D9328u;
            goto label_1d9328;
        }
    }
    ctx->pc = 0x1D92F0u;
    // 0x1d92f0: 0x2ca20016  sltiu       $v0, $a1, 0x16
    ctx->pc = 0x1d92f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d92f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D92F4u;
    {
        const bool branch_taken_0x1d92f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92F4u;
        // 0x1d92f8: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92f4) {
            ctx->pc = 0x1D9328u;
            goto label_1d9328;
        }
    }
    ctx->pc = 0x1D92FCu;
    // 0x1d92fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D92FCu;
    {
        const bool branch_taken_0x1d92fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92FCu;
        // 0x1d9300: 0x29220020  slti        $v0, $t1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92fc) {
            ctx->pc = 0x1D9310u;
            goto label_1d9310;
        }
    }
    ctx->pc = 0x1D9304u;
    // 0x1d9304: 0x0  nop
    ctx->pc = 0x1d9304u;
    // NOP
label_1d9308:
    // 0x1d9308: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x1d9308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x1d930c: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1d930cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
label_1d9310:
    // 0x1d9310: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9310u;
    {
        const bool branch_taken_0x1d9310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9310) {
            ctx->pc = 0x1D9314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9310u;
            // 0x1d9314: 0x25220007  addiu       $v0, $t1, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9334u;
            goto label_1d9334;
        }
    }
    ctx->pc = 0x1D9318u;
    // 0x1d9318: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1d9318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1d931c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D931Cu;
    {
        const bool branch_taken_0x1d931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D931Cu;
        // 0x1d9320: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d931c) {
            ctx->pc = 0x1D9330u;
            goto label_1d9330;
        }
    }
    ctx->pc = 0x1D9324u;
    // 0x1d9324: 0x0  nop
    ctx->pc = 0x1d9324u;
    // NOP
label_1d9328:
    // 0x1d9328: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9328u;
        // 0x1d932c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9330u;
label_1d9330:
    // 0x1d9330: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1d9334:
    // 0x1d9334: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d9334u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d9338: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1d9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1d933c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1d9340: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1d9344: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x1d9344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d9348: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d934c:
    // 0x1d934c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9354u;
    // 0x1d9354: 0x0  nop
    ctx->pc = 0x1d9354u;
    // NOP
}
