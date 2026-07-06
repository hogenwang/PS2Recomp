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

// Function: sub_001C7DE0
// Address: 0x1c7de0 - 0x1c7fb0
void sub_001C7DE0_0x1c7de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7DE0_0x1c7de0");
#endif

    switch (ctx->pc) {
        case 0x1c7f7cu: goto label_1c7f7c;
        case 0x1c7f90u: goto label_1c7f90;
        default: break;
    }

    ctx->pc = 0x1c7de0u;

    // 0x1c7de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7de4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x1c7de4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7dec: 0x3c0d003f  lui         $t5, 0x3F
    ctx->pc = 0x1c7decu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)63 << 16));
    // 0x1c7df0: 0x25adacb0  addiu       $t5, $t5, -0x5350
    ctx->pc = 0x1c7df0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945968));
    // 0x1c7df4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1c7df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1c7df8: 0x8f03001c  lw          $v1, 0x1C($t8)
    ctx->pc = 0x1c7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x1c7dfc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1c7dfcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1c7e00: 0x8f020020  lw          $v0, 0x20($t8)
    ctx->pc = 0x1c7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x1c7e04: 0x240bf211  addiu       $t3, $zero, -0xDEF
    ctx->pc = 0x1c7e04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963729));
    // 0x1c7e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c7e0c: 0x240ff82a  addiu       $t7, $zero, -0x7D6
    ctx->pc = 0x1c7e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
    // 0x1c7e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c7e14: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1c7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1c7e18: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x1c7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1c7e1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7e20: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1c7e20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7e24: 0x8f020028  lw          $v0, 0x28($t8)
    ctx->pc = 0x1c7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x1c7e28: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1c7e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c7e2c: 0x70a82818  mult1       $a1, $a1, $t0
    ctx->pc = 0x1c7e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c7e30: 0x8f080008  lw          $t0, 0x8($t8)
    ctx->pc = 0x1c7e30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x1c7e34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c7e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c7e38: 0x8f0a0014  lw          $t2, 0x14($t8)
    ctx->pc = 0x1c7e38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x1c7e3c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x1c7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1c7e40: 0x8f0c0024  lw          $t4, 0x24($t8)
    ctx->pc = 0x1c7e40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x1c7e44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7e48: 0x24020def  addiu       $v0, $zero, 0xDEF
    ctx->pc = 0x1c7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3567));
    // 0x1c7e4c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1c7e4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1c7e50: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x1c7e50u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x1c7e54: 0xa34818  mult        $t1, $a1, $v1
    ctx->pc = 0x1c7e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1c7e58: 0x70831818  mult1       $v1, $a0, $v1
    ctx->pc = 0x1c7e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c7e5c: 0x8f10000c  lw          $s0, 0xC($t8)
    ctx->pc = 0x1c7e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x1c7e60: 0xa7080  sll         $t6, $t2, 2
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1c7e64: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x1c7e64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e68: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1c7e68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1c7e6c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x1c7e6cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1c7e70: 0x240807d6  addiu       $t0, $zero, 0x7D6
    ctx->pc = 0x1c7e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
    // 0x1c7e74: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x1c7e74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1c7e78: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x1c7e78u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x1c7e7c: 0x6b5818  mult        $t3, $v1, $t3
    ctx->pc = 0x1c7e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c7e80: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x1c7e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c7e84: 0x712f7818  mult1       $t7, $t1, $t7
    ctx->pc = 0x1c7e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c7e88: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x1c7e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1c7e8c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1c7e8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1c7e90: 0x1506821  addu        $t5, $t2, $s0
    ctx->pc = 0x1c7e90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1c7e94: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x1c7e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e98: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1c7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1c7e9c: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x1c7e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1c7ea0: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x1c7ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1c7ea4: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x1c7ea4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1c7ea8: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x1c7ea8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x1c7eac: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1c7eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c7eb0: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x1c7eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x1c7eb4: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x1c7eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1c7eb8: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x1c7eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c7ebc: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x1c7ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1c7ec0: 0x8f020014  lw          $v0, 0x14($t8)
    ctx->pc = 0x1c7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x1c7ec4: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x1c7ec4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x1c7ec8: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x1c7ec8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x1c7ecc: 0x240a7fff  addiu       $t2, $zero, 0x7FFF
    ctx->pc = 0x1c7eccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1c7ed0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c7ed4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1c7ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1c7ed8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c7edc: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1c7edcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1c7ee0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x1c7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x1c7ee4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1c7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1c7ee8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1c7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1c7eec: 0x240c8000  addiu       $t4, $zero, -0x8000
    ctx->pc = 0x1c7eecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1c7ef0: 0x8f080014  lw          $t0, 0x14($t8)
    ctx->pc = 0x1c7ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x1c7ef4: 0x144502a  slt         $t2, $t2, $a0
    ctx->pc = 0x1c7ef4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c7ef8: 0x165582a  slt         $t3, $t3, $a1
    ctx->pc = 0x1c7ef8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c7efc: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x1c7efcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1c7f00: 0x288d8000  slti        $t5, $a0, -0x8000
    ctx->pc = 0x1c7f00u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1c7f04: 0x8f090018  lw          $t1, 0x18($t8)
    ctx->pc = 0x1c7f04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x1c7f08: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1c7f08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1c7f0c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1c7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1c7f10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c7f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c7f14: 0x18d200b  movn        $a0, $t4, $t5
    ctx->pc = 0x1c7f14u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 12));
    // 0x1c7f18: 0x394a0000  xori        $t2, $t2, 0x0
    ctx->pc = 0x1c7f18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)0);
    // 0x1c7f1c: 0x396b0000  xori        $t3, $t3, 0x0
    ctx->pc = 0x1c7f1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
    // 0x1c7f20: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x1c7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1c7f24: 0x4a200b  movn        $a0, $v0, $t2
    ctx->pc = 0x1c7f24u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1c7f28: 0x6b280b  movn        $a1, $v1, $t3
    ctx->pc = 0x1c7f28u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1c7f2c: 0x109482a  slt         $t1, $t0, $t1
    ctx->pc = 0x1c7f2cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c7f30: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1c7f30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c7f34: 0xaf080014  sw          $t0, 0x14($t8)
    ctx->pc = 0x1c7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 8));
    // 0x1c7f38: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7F38u;
    {
        const bool branch_taken_0x1c7f38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F38u;
        // 0x1c7f3c: 0xa4e50000  sh          $a1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f38) {
            ctx->pc = 0x1C7F44u;
            goto label_1c7f44;
        }
    }
    ctx->pc = 0x1C7F40u;
    // 0x1c7f40: 0xaf000014  sw          $zero, 0x14($t8)
    ctx->pc = 0x1c7f40u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 0));
label_1c7f44:
    // 0x1c7f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F48u;
        // 0x1c7f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7F50u;
    // 0x1c7f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c7f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c7f60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c7f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c7f68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c7f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c7f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c7f70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c7f74: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C7F74u;
    SET_GPR_U32(ctx, 31, 0x1C7F7Cu);
    ctx->pc = 0x1C7F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F74u;
    // 0x1c7f78: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7A08u, 0x1C7F74u, 0x1C7F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F7Cu;
label_1c7f7c:
    // 0x1c7f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c7f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f88: 0xc071fec  jal         func_1C7FB0
    ctx->pc = 0x1C7F88u;
    SET_GPR_U32(ctx, 31, 0x1C7F90u);
    ctx->pc = 0x1C7F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F88u;
    // 0x1c7f8c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7FB0u, 0x1C7F88u, 0x1C7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F90u;
label_1c7f90:
    // 0x1c7f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7f94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7f98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c7f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7f9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7fa4: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C7FA4u;
    ctx->pc = 0x1C7FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FA4u;
    // 0x1c7fa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7FACu;
    // 0x1c7fac: 0x0  nop
    ctx->pc = 0x1c7facu;
    // NOP
    if (ctx->pc == 0x1c7facu) { ctx->pc = 0x1c7fb0u; }
}
